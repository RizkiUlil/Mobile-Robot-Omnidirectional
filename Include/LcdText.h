/* rutin LCD matrix text 
   oleh Eko Henfri B
   copyright(c) ERRC 2011
*/

#ifndef __LCD_TEXT_
#define __LCD_TEXT_

extern void lcd_Test(unsigned char xx);
extern void wait_lcd(unsigned long int xx);
extern void lcd_ins(unsigned short xx);
extern void lcd_ins2(unsigned short xx);
extern void lcd_cmd(unsigned char cmd);
extern void lcd_data(unsigned char dat);
extern void lcd_reset(void);
extern void lcd_init(void);
extern void lcd_gotoxy(unsigned char x, unsigned char y);
extern void lcd_clear(void);
// menampilkan string ke lCD
extern void lcd_putsf(const char *str);
extern void lcd_putchar (unsigned char dat);     
extern void lcd_puts(char *str);	
// Custom CGRAM
extern void bargraph(char line,char row,unsigned long value,unsigned int max);	    
extern void bargraph2(char line,unsigned long value,unsigned int max);	    
extern void special(char line,char row,unsigned char value);
extern bargraph_init(char width);  
extern special_init();

extern void lcd_uint1 (unsigned short xx);
extern void lcd_uint2(unsigned short xx);
extern void lcd_uint16(unsigned short xx);
extern void lcd_uint32(unsigned short xx);
extern void lcd_int16 (short int xx); 

// menampilkan data dalam bentuk hexa desimal
extern void lcd_bin (unsigned char xx);
extern void lcd_hex (unsigned char xx);
extern void lcd_hex8 (unsigned char xx);
extern void lcd_hex16(unsigned short int xx); 
extern void lcd_hex32(unsigned long int xx); 


extern void lcd_float6(float xx);
// menampilkan string ke lCD
extern void lcd_string(const char *xx);




#endif
