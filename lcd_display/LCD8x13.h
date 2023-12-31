//GLCD FontName : LCD8x13
//GLCD FontSize : 8 x 13

const unsigned char LCD8x13[] = {
        17,8,13,2, 
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x06, 0x7C, 0x0C, 0x00, 0x00,  // Code for char !
        0x07, 0x7C, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x7C, 0x00, 0x00, 0x00,  // Code for char "
        0x07, 0x30, 0x03, 0xF8, 0x0F, 0x7C, 0x1F, 0x30, 0x03, 0x30, 0x03, 0x38, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char #
        0x07, 0x7C, 0x00, 0xBA, 0x10, 0xC6, 0x18, 0xFE, 0x1F, 0xC6, 0x18, 0x02, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char $
        0x07, 0x1C, 0x0C, 0x14, 0x06, 0x1C, 0x03, 0x80, 0x01, 0xE0, 0x1C, 0x30, 0x14, 0x18, 0x1C, 0x00, 0x00,  // Code for char %
        0x07, 0x1C, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x19, 0xCE, 0x1B, 0x78, 0x16, 0x38, 0x0C, 0x00, 0x00,  // Code for char &
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x7C, 0x00, 0x00, 0x00,  // Code for char '
        0x07, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x02, 0x10, 0x00, 0x00,  // Code for char (
        0x07, 0x00, 0x00, 0x02, 0x10, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char )
        0x07, 0xFC, 0x0F, 0xB8, 0x07, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x38, 0x07, 0xFC, 0x0F, 0x00, 0x00,  // Code for char *
        0x07, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xF0, 0x03, 0xF0, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00,  // Code for char +
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x00,  // Code for char ,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00,  // Code for char -
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,  // Code for char .
        0x07, 0x80, 0x0F, 0x80, 0x07, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x38, 0x00, 0x7C, 0x00, 0x00, 0x00,  // Code for char /
        0x07, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char 0
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char 1
        0x07, 0x80, 0x0F, 0x82, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x10, 0x7C, 0x00, 0x00, 0x00,  // Code for char 2
        0x07, 0x00, 0x00, 0x82, 0x10, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char 3
        0x07, 0x7C, 0x00, 0xB8, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x38, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char 4
        0x07, 0x7C, 0x00, 0xBA, 0x10, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x02, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char 5
        0x07, 0xFC, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x02, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char 6
        0x07, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x3A, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char 7
        0x07, 0xFC, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char 8
        0x07, 0x7C, 0x00, 0xBA, 0x10, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char 9
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x06, 0x30, 0x06, 0x00, 0x00, 0x00, 0x00,  // Code for char :
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x30, 0x0E, 0x30, 0x06, 0x00, 0x00,  // Code for char ;
        0x07, 0x00, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x38, 0x07, 0xFC, 0x0F, 0x00, 0x00,  // Code for char <
        0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x10, 0x00, 0x00,  // Code for char =
        0x07, 0x00, 0x00, 0xF8, 0x07, 0x30, 0x03, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00,  // Code for char >
        0x07, 0x00, 0x00, 0x82, 0x10, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x10, 0x7C, 0x00, 0x00, 0x00,  // Code for char ?
        0x07, 0xFC, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char @
        0x07, 0xFC, 0x0F, 0xBA, 0x07, 0xC6, 0x00, 0xC6, 0x00, 0xC6, 0x00, 0x3A, 0x07, 0xFC, 0x0F, 0x00, 0x00,  // Code for char A
        0x07, 0xFC, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xEE, 0x1D, 0x3C, 0x0F, 0xF0, 0x03, 0x00, 0x00,  // Code for char B
        0x07, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x02, 0x10, 0x00, 0x00,  // Code for char C
        0x07, 0xBC, 0x0F, 0x7A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x3C, 0x0F, 0xF8, 0x07, 0x00, 0x00,  // Code for char D
        0x07, 0xFC, 0x0F, 0xBA, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x06, 0x18, 0x02, 0x10, 0x00, 0x00,  // Code for char E
        0x06, 0xFC, 0x1F, 0xBA, 0x0F, 0xC6, 0x00, 0xC6, 0x00, 0xC6, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char F
        0x07, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x02, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char G
        0x07, 0xFC, 0x1F, 0x78, 0x0E, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x78, 0x0E, 0xFC, 0x1F, 0x00, 0x00,  // Code for char H
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char I
        0x07, 0x80, 0x0F, 0x00, 0x17, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x38, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char J
        0x07, 0xFC, 0x1F, 0x78, 0x0E, 0x80, 0x01, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x0F, 0x70, 0x1E, 0x00, 0x00,  // Code for char K
        0x07, 0xFC, 0x0F, 0x38, 0x17, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00,  // Code for char L
        0x07, 0xFC, 0x1F, 0x9A, 0x0F, 0xC6, 0x00, 0xCE, 0x00, 0xC6, 0x00, 0x1A, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char M
        0x07, 0xFC, 0x1F, 0x38, 0x0F, 0x70, 0x00, 0xC0, 0x01, 0x80, 0x01, 0x38, 0x0F, 0xFC, 0x1F, 0x00, 0x00,  // Code for char N
        0x07, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char O
        0x07, 0xFC, 0x1F, 0xBA, 0x0F, 0xC6, 0x00, 0xC6, 0x00, 0xC6, 0x00, 0x3A, 0x00, 0x7C, 0x00, 0x00, 0x00,  // Code for char P
        0x07, 0xFC, 0x07, 0x3A, 0x0F, 0x06, 0x0C, 0x06, 0x0C, 0x06, 0x08, 0x3A, 0x1F, 0xFC, 0x1B, 0x00, 0x00,  // Code for char Q
        0x07, 0xF8, 0x1F, 0x34, 0x0F, 0xCC, 0x00, 0xCC, 0x01, 0xCC, 0x07, 0x74, 0x1E, 0x38, 0x18, 0x00, 0x00,  // Code for char R
        0x07, 0x7C, 0x00, 0xBA, 0x10, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x02, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char S
        0x08, 0x02, 0x00, 0x06, 0x00, 0x06, 0x00, 0x7E, 0x0F, 0xBE, 0x1F, 0x06, 0x00, 0x06, 0x00, 0x02, 0x00,  // Code for char T
        0x07, 0xFC, 0x0F, 0x38, 0x17, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x38, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char U
        0x07, 0xFC, 0x07, 0x38, 0x0F, 0x00, 0x1C, 0x00, 0x18, 0x00, 0x1C, 0x38, 0x0F, 0xFC, 0x07, 0x00, 0x00,  // Code for char V
        0x07, 0xFE, 0x0F, 0x3C, 0x17, 0x00, 0x18, 0x00, 0x1F, 0x00, 0x18, 0x3C, 0x17, 0xFE, 0x0F, 0x00, 0x00,  // Code for char W
        0x07, 0x1C, 0x1C, 0x38, 0x0E, 0xE0, 0x03, 0xC0, 0x01, 0xE0, 0x03, 0x38, 0x0E, 0x1C, 0x1C, 0x00, 0x00,  // Code for char X
        0x07, 0x7C, 0x00, 0xB8, 0x10, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0x38, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char Y
        0x07, 0x80, 0x0F, 0x82, 0x17, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0x3A, 0x10, 0x7C, 0x00, 0x00, 0x00,  // Code for char Z
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0x3A, 0x17, 0x06, 0x18, 0x02, 0x10, 0x00, 0x00,  // Code for char [
        0x07, 0x00, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x00, 0x80, 0x03, 0x00, 0x0F, 0x00, 0x1C, 0x00, 0x00,  // Code for char BackSlash
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x06, 0x18, 0x3A, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char ]
        0x07, 0x00, 0x00, 0x08, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x08, 0x00, 0x00, 0x00,  // Code for char ^
        0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00,  // Code for char _
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x10, 0x00, 0x00, 0x00,  // Code for char `
        0x07, 0x00, 0x0F, 0x80, 0x1F, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x00,  // Code for char a
        0x07, 0xFC, 0x0F, 0xB8, 0x17, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0x00, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char b
        0x07, 0x80, 0x0F, 0x00, 0x17, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0x80, 0x08, 0x00, 0x00,  // Code for char c
        0x07, 0x80, 0x0F, 0x80, 0x17, 0xC0, 0x18, 0xC0, 0x18, 0xC0, 0x18, 0x38, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char d
        0x07, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x15, 0xC0, 0x1A, 0xC0, 0x1A, 0xC0, 0x1B, 0x80, 0x11, 0x00, 0x00,  // Code for char e
        0x07, 0xE0, 0x1F, 0x30, 0x0F, 0x98, 0x01, 0x98, 0x01, 0x98, 0x01, 0x18, 0x00, 0x10, 0x00, 0x00, 0x00,  // Code for char f
        0x07, 0x00, 0x00, 0x70, 0x00, 0xF0, 0x08, 0xD8, 0x18, 0x98, 0x18, 0x78, 0x17, 0xF0, 0x0F, 0x00, 0x00,  // Code for char g
        0x07, 0xF8, 0x1E, 0x70, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x00, 0x0F, 0x00, 0x1E, 0x00, 0x00,  // Code for char h
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1E, 0x20, 0x0F, 0x00, 0x00,  // Code for char i
        0x07, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x1E, 0x00, 0x18, 0x00, 0x18, 0x38, 0x17, 0xFC, 0x0F, 0x00, 0x00,  // Code for char j
        0x07, 0xF8, 0x1E, 0x7C, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x40, 0x0F, 0x60, 0x1E, 0x00, 0x00,  // Code for char k
        0x07, 0x00, 0x00, 0xFC, 0x0F, 0x78, 0x16, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x10, 0x00, 0x00,  // Code for char l
        0x07, 0x80, 0x1F, 0x80, 0x0F, 0xC0, 0x00, 0xC0, 0x03, 0xC0, 0x01, 0x00, 0x0F, 0x80, 0x1F, 0x00, 0x00,  // Code for char m
        0x07, 0x80, 0x1F, 0x00, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x00, 0x0F, 0x00, 0x1E, 0x00, 0x00,  // Code for char n
        0x07, 0x00, 0x06, 0x00, 0x0F, 0x80, 0x19, 0x80, 0x19, 0x80, 0x19, 0x00, 0x0F, 0x00, 0x06, 0x00, 0x00,  // Code for char o
        0x07, 0xF0, 0x1F, 0x78, 0x0E, 0x98, 0x01, 0x98, 0x01, 0x98, 0x01, 0xF0, 0x00, 0x60, 0x00, 0x00, 0x00,  // Code for char p
        0x07, 0x00, 0x00, 0xF0, 0x00, 0xF8, 0x01, 0x98, 0x01, 0x98, 0x01, 0xB8, 0x0F, 0x70, 0x1F, 0x00, 0x00,  // Code for char q
        0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 0xC0, 0x07, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00,  // Code for char r
        0x07, 0x00, 0x00, 0x80, 0x11, 0xE0, 0x1B, 0x60, 0x1B, 0x60, 0x1B, 0x60, 0x0F, 0x20, 0x06, 0x00, 0x00,  // Code for char s
        0x07, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0xC0, 0x08, 0xC0, 0x18, 0x70, 0x1F, 0xE0, 0x0E, 0x00, 0x00,  // Code for char t
        0x07, 0x00, 0x0E, 0x00, 0x17, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char u
        0x07, 0x00, 0x00, 0x80, 0x07, 0x00, 0x0F, 0x00, 0x18, 0x00, 0x18, 0x00, 0x0F, 0x80, 0x07, 0x00, 0x00,  // Code for char v
        0x07, 0x80, 0x0F, 0x00, 0x17, 0x00, 0x18, 0x00, 0x1E, 0x00, 0x18, 0x00, 0x17, 0x80, 0x0F, 0x00, 0x00,  // Code for char w
        0x07, 0x00, 0x00, 0xE0, 0x1D, 0xC0, 0x0E, 0x00, 0x03, 0x00, 0x03, 0xE0, 0x1E, 0xC0, 0x0D, 0x00, 0x00,  // Code for char x
        0x07, 0x00, 0x00, 0xF0, 0x00, 0x60, 0x11, 0x80, 0x19, 0x80, 0x19, 0x30, 0x17, 0xE0, 0x0F, 0x00, 0x00,  // Code for char y
        0x07, 0x00, 0x00, 0x20, 0x0C, 0x60, 0x16, 0x60, 0x1B, 0x60, 0x1B, 0xA0, 0x19, 0xC0, 0x08, 0x00, 0x00,  // Code for char z
        0x07, 0xC0, 0x00, 0x3C, 0x0F, 0x7A, 0x17, 0x06, 0x18, 0x06, 0x18, 0x06, 0x18, 0x02, 0x08, 0x00, 0x00,  // Code for char {
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x0F, 0xFE, 0x1F, 0x00, 0x00,  // Code for char |
        0x07, 0x00, 0x00, 0x02, 0x10, 0x06, 0x18, 0x06, 0x18, 0x3E, 0x1F, 0xFC, 0x0F, 0xC0, 0x00, 0x00, 0x00,  // Code for char }
        0x07, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0x80, 0x01, 0x00, 0x00,  // Code for char ~
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 0x04, 0x08, 0xFC, 0x0F, 0x00, 0x00   // Code for char 
        };

