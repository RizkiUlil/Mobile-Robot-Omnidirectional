#include "../Include/main.h"
#include <stm32f10x_lib.h>
#include "../Include/STM32_Init.h"
#include "../Include/Delay.h"

#define delay_const 	(unsigned long) (stm32_GetPCLK1() / 3538461)//5538461)

unsigned long int Gticks;
unsigned int waktu;

void delay_ms(unsigned short int x){ 
	unsigned short int LastGticks; 
  	LastGticks = Get_Gticks();
  	if ((unsigned long int)(LastGticks+x) > 65535){
		while (Get_Gticks()!=0);
   		LastGticks +=(x) - 65535;
    	while (Get_Gticks()<LastGticks);
  	}
  	else{
		LastGticks += (x);
    	while (Get_Gticks()<LastGticks);
  	}	
}

void delay_us(unsigned long int xx)
{  xx*= delay_const;	
   while(xx--);
}


void SysTick_Handler(void){
	Gticks++;
	waktu++;
}
unsigned short Get_Gticks(void) {
	return(Gticks);	
} 

