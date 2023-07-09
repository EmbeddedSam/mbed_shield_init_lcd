#include "lcd_display.h"
#include <stdio.h>
#include <stdint.h>

//  A0 pin - Connected to the least significant bit of the normal MPU address bus, and it determines whether the data bits are data or a command.
//  A0 = “H”: Indicates that D0 to D7 are display data.
//  A0 = “L”: Indicates that D0 to D7 are control data.

//  Reset pin = "L": Settings are reset
//  CS pin    = "L": Data/command IO is active

void lcd_clear_buffer(Display* display) {
    memset(display->buffer, 0, sizeof(display->buffer));
}

void lcd_display_init(Display* display){
    uint8_t lcd_init_commands[] = {
        
        0xAE,   //  Display off
        0xA2,   //  Bias voltage
        0xA0,   //  Normal RAM address output
        0xC8,   //  Normal direction
        0x22,   //  Voltage resistor ratio
        0x2F,   //  Power on
        0x40,   //  Start line 0
        0xAF,   //  Display on
        0x81,   //  Set contrast
        0x17,   //  Set contrast
        0xA6    //  Display normal
    };
    lcd_reset_pin(0);
    LL_mDelay(1);
    lcd_reset_pin(1);
    LL_mDelay(5);
    lcd_command_out(lcd_init_commands, sizeof(lcd_init_commands));
    
    lcd_clear_buffer(display);
    lcd_locate(display, 0,0);
}

void lcd_locate(Display* display, uint8_t x, uint8_t y){
    display->char_x = x;
    display->char_y = y;
}

void lcd_display_character_A(Display* display)
{
    lcd_clear_buffer(display);
	display->buffer[0] = 0x00;
	display->buffer[1] = 0x7c;
	display->buffer[2] = 0x7e;
	display->buffer[3] = 0x13;
	display->buffer[4] = 0x13;
	display->buffer[5] = 0x7e;
	display->buffer[6] = 0x7c;
	display->buffer[7] = 0x00;
	lcd_write_data_buffer(display->buffer);
}

void lcd_fill_screen(Display* display){
    memset(display->buffer, 0xFF, sizeof(display->buffer));
    lcd_write_data_buffer(display->buffer);
}

void lcd_clear_screen(Display* display){
    memset(display->buffer, 0x00, sizeof(display->buffer));
    lcd_write_data_buffer(display->buffer);
}

void lcd_set_pixel(Display* display, int x, int y, int colour){
    if(x > 127 || y > 32 || x < 1 || y < 0) return;
    if(colour == 0)
      display->buffer[x + ((y/8) * 128)] &= ~(1 << (y%8));  // erase pixel
    else
      display->buffer[x + ((y/8) * 128)] |= (1  << (y%8));   // set pixel
}

int lcd_put_string(Display* display, int x, int y, char* string){
	lcd_locate(display,x,y);
	int width_of_font = display->font[1]-1;
	int length = strlen(string);
	for(int i=0; i<length;i++){
		lcd_put_char(display, string[i]);
		x+=(width_of_font); 
		lcd_locate(display,x,y);
	}
	return 1;
}

int lcd_put_char(Display* display, int value)
{
    if (value == '\n') {    // new line
        display->char_x = 0;
        display->char_y = display->char_y + display->font[2];
        if (display->char_y >= display->height - display->font[2]) {
            display->char_y = 0;
        }
    } else {
        lcd_character(display, display->char_x, display->char_y, value);
        lcd_write_data_buffer(display->buffer);
    }
    return value;
}

void lcd_character(Display* display, int x, int y, int c)
{
    unsigned int hor,vert,offset,bpl,j,i,b;
    unsigned char* symbol;
    unsigned char z,w;
 
    if ((c < 31) || (c > 127)) return;   // test char range
 
    // read font parameter from start of array
    offset = display->font[0];                       // bytes / char
    hor    = display->font[1];                       // get hor size of font
    vert   = display->font[2];                       // get vert size of font
    bpl    = display->font[3];                       // bytes per line
 
    if (display->char_x + hor > display->width) {
        display->char_x = 0;
        display->char_y = display->char_y + vert;
        if (display->char_y >= display->height - display->font[2]) {
            display->char_y = 0;
        }
    }
 
    symbol = &display->font[((c -32) * offset) + 4];    // start of char bitmap
    w = symbol[0];                                      // width of actual char
                                                        // construct the char into the buffer
    for (j=0; j<vert; j++) {                            //  vert line
        for (i=0; i<hor; i++) {                         //  horz line
            z =  symbol[bpl * i + ((j & 0xF8) >> 3)+1];
            b = 1 << (j & 0x07);
            if (( z & b ) == 0x00) {
                lcd_set_pixel(display, x+i,y+j,0);
            } else {
                lcd_set_pixel(display, x+i,y+j,1);
            }
 
        }
    }
    display->char_x += w;
}
 


void lcd_send_spi_byte(uint8_t byte){
    // Send individual byte on SPI1
    while(LL_SPI_IsActiveFlag_BSY(SPI1));
    LL_SPI_TransmitData8(SPI1, (uint8_t)byte);
    // See reference manual 20.3.7 and 20.3.8 for why these flags are checked
    while(LL_SPI_IsActiveFlag_TXE(SPI1));
    while(LL_SPI_IsActiveFlag_BSY(SPI1));
}

void lcd_send_spi_bytes(uint8_t *bytes, uint8_t size){
    // Send multiple bytes on SPI1
    if(!LL_SPI_IsEnabled(SPI1)){
        LL_SPI_Enable(SPI1);
    }
    while(LL_SPI_IsActiveFlag_BSY(SPI1));
    for(int i=0;i<size;i++){
        LL_SPI_TransmitData8(SPI1, *(bytes+i));
        while(LL_SPI_IsActiveFlag_TXE(SPI1));
        while(LL_SPI_IsActiveFlag_BSY(SPI1));
    }
    // See reference manual 20.3.7 and 20.3.8 for why these flags are checked
    //LL_SPI_Disable(SPI1);
}


void lcd_data_out(uint8_t *data, uint8_t size){
    lcd_chip_select_pin(0);
    lcd_command_or_data_mode('D');
    lcd_send_spi_bytes(data, size);
    // for(int i = 0; i<size; i++){
    //     lcd_send_spi_byte(*(data+i));
    // }
    lcd_chip_select_pin(1);
}

void lcd_command_out(uint8_t *command, uint8_t size){
    lcd_chip_select_pin(0);
    lcd_command_or_data_mode('C');
    lcd_send_spi_bytes(command, size);
    // for(int i = 0; i<size; i++){
    //     //LL_mDelay(1);
    //     lcd_send_spi_byte(*(command+i));
    // }
    lcd_chip_select_pin(1);
}

void lcd_reset_pin(uint8_t pinstate){
	if(pinstate == 0){
		LL_GPIO_ResetOutputPin(LCD_RESET_N_GPIO_Port, LCD_RESET_N_Pin);
	}
	else{
		LL_GPIO_SetOutputPin(LCD_RESET_N_GPIO_Port, LCD_RESET_N_Pin);
	}
}

void lcd_chip_select_pin(uint8_t pinstate){
	if(pinstate == 0){
		LL_GPIO_ResetOutputPin(LCD_CS_N_GPIO_Port, LCD_CS_N_Pin);
	}
	else{
		LL_GPIO_SetOutputPin(LCD_CS_N_GPIO_Port, LCD_CS_N_Pin);
	}
}

void lcd_command_or_data_mode(char iod){
	if((iod == 'c') || (iod == 'C')){
		//Command out - set A0 to 0
		LL_GPIO_ResetOutputPin(LCD_REGISTER_SELECT_GPIO_Port, LCD_REGISTER_SELECT_Pin);
	}
	if((iod == 'd') || (iod == 'D')){
        //Data out - set A0 to 1
		LL_GPIO_SetOutputPin(LCD_REGISTER_SELECT_GPIO_Port, LCD_REGISTER_SELECT_Pin);
	}
}

void lcd_write_data_buffer(uint8_t *buffer)
{    
    //To set 8-bit column address data will start, the address is split into 2 nibbles
	//to send the lower nibble, 0x0 then the lower nibble of the 8 bit address, so nibble of 0 would be 0x00
	//to send the higher nibble 0x1 then the higher nibble of the 8 bit address, so nibble of 0 would be 0x10
	//to set the column start to 0, send 0x00 then 0x10
	  
	// Page 0
    uint8_t page_commands[3] = {
        0x00, // set column low nibble to 0 
        0x10, // set column low nibble to 0
        0xB0  // set page address  0
    };
    lcd_command_out(page_commands, 3);
    lcd_data_out(buffer, 128);

    // Page 1
    page_commands[2] = 0xB1;    // set page address 1
    lcd_command_out(page_commands, 3);
    lcd_data_out(buffer+128, 128);

    // Page 2
    page_commands[2] = 0xB2;
    lcd_command_out(page_commands, 3);
    lcd_data_out(buffer+256, 128);

    // Page 3
    page_commands[2] = 0xB3;
    lcd_command_out(page_commands, 3);
    lcd_data_out(buffer+384, 128);
}