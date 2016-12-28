#include <stdio.h> 	 
#include <math.h>
#include <stm32f10x_lib.h>           
#include "../Include/STM32_Init.h"  
#include "../Include/Delay.h"
#include "../Include/LcdText.h"  

int main(void){
	stm32_Init();
	lcd_init();
	lcd_gotoxy(0,0);
	lcd_putsf("  MOBILE ROBOT  ");	
	lcd_gotoxy(0,1);
	lcd_putsf("Forward  Inverse");
	delay_ms(1000);
	while(1){

	}
}


