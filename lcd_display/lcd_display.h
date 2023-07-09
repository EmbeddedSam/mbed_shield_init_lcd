#ifndef LCD_DISPLAY_H
#define LCD_DISPLAY_H

#include "main.h"
#include <string.h>
#include "Small_7.h"


// Define the Display struct
typedef struct {
    uint8_t buffer[512]; // Display data buffer for LCD
    uint8_t char_x, char_y;
    uint8_t *font;
    uint8_t width, height;
} Display;

void    lcd_clear_buffer(Display* display); 
void    lcd_display_init(Display* display);
void    lcd_send_spi_byte(uint8_t byte);
void    lcd_send_spi_bytes(uint8_t *bytes, uint8_t size);

void    lcd_initialise_controller(void);
void    lcd_reset_pin(uint8_t pinstate);
void    lcd_chip_select_pin(uint8_t pinstate);
void    lcd_command_or_data_mode(char);
void    lcd_data_out(uint8_t *data, uint8_t size);
void    lcd_command_out(uint8_t *command, uint8_t size);
void    lcd_write_data_buffer(uint8_t *buffer);

void    lcd_display_character_A(Display* display);
void    lcd_locate(Display* display, uint8_t x, uint8_t y);
void    lcd_clear_screen(Display* display);
void    lcd_fill_screen(Display* display);

void    lcd_set_pixel(Display* display, int x, int y, int colour);
int     lcd_put_char(Display* display, int value);
int     lcd_put_string(Display* display, int x, int y, char* string);
void    lcd_character(Display* display, int x, int y, int c);

// void    lcd_write_command_byte(uint8_t command);
// void    lcd_write_data_byte(uint8_t data);

// void    lcd_send_data_buffer(void);
// void    lcd_clear_screen(void);  
// void    lcd_display_hello(void);
// void    lcd_locate(int x, int y);
// int     lcd_columns(void);
// int     lcd_rows(void);
// int     lcd_width(void);
// int     lcd_height(void);
// void    lcd_set_contrast(uint8_t contrast);
// void    lcd_set_font(uint8_t* font);
// void    lcd_character(int x, int y, int c);
#endif