#ifndef __MYDELAY_H
#define __MYDELAY_H
						 
extern void SysTick_Handler(void);
extern unsigned short Get_Gticks(void);
extern void delay_ms(unsigned short int x);
extern void delay_us(unsigned long int xx);
#endif

