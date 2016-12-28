#ifndef _MAIN_H
#define _MAIN_H

#include "../Include/STM32_Init.h"
#include <stm32f10x_lib.h> 

#define SetA(y) 		GPIOA->BSRR = (1<<y);
#define SetB(y) 		GPIOB->BSRR = (1<<y);
#define SetC(y) 		GPIOC->BSRR = (1<<y);
#define SetD(y) 		GPIOD->BSRR = (1<<y);
#define SetE(y) 		GPIOE->BSRR = (1<<y);
#define SetF(y) 		GPIOF->BSRR = (1<<y);
#define SetG(y) 		GPIOG->BSRR = (1<<y);

#define ClrA(y) 		GPIOA->BRR  = (1<<y);
#define ClrB(y) 		GPIOB->BRR  = (1<<y);
#define ClrC(y) 		GPIOC->BRR  = (1<<y);
#define ClrD(y) 		GPIOD->BRR  = (1<<y);
#define ClrE(y) 		GPIOE->BRR  = (1<<y);
#define ClrF(y) 		GPIOF->BRR  = (1<<y);
#define ClrG(y) 		GPIOG->BRR  = (1<<y);

#define GetA(y) 		(GPIOA->IDR & (1<<y))
#define GetB(y) 		(GPIOB->IDR & (1<<y))
#define GetC(y) 		(GPIOC->IDR & (1<<y))
#define GetD(y) 		(GPIOD->IDR & (1<<y))
#define GetE(y) 		(GPIOE->IDR & (1<<y))
#define GetF(y) 		(GPIOF->IDR & (1<<y))
#define GetG(y) 		(GPIOG->IDR & (1<<y))

#define SetBit(x,y) 	x->BSRR = (1<<y);
#define ClrBit(x,y) 	x->BRR  = (1<<y);
#define Pin(Port,x)	    (Port->IDR&(1<<x))

#define PbA		Pin(GPIOA,15)
#define PbB		Pin(GPIOC,10)
#define PbC		Pin(GPIOA,12)
   				    
#define PullUp		{SetA(15);SetC(10);SetA(12);}

// --------------------- Output 3 motor ------------------------------------
#define CCW3		SetA(6); 
#define CW3			ClrA(6); 
#define CCW2		ClrC(4); 
#define CW2			SetC(4); 
#define CCW1		SetE(7); 
#define CW1			ClrE(7); 

#define	M3L			ClrA(7);
#define M3H			SetA(7);
#define	M2L			ClrB(0);
#define M2H			SetB(0);
#define	M1L			ClrB(1);
#define M1H			SetB(1);

// --------------------- PWM ------------------------------------
#define Pwm1			TIM8->CCR3
#define Pwm2			TIM8->CCR2
#define Pwm3			TIM8->CCR1

extern unsigned short Get_Gticks(void);
extern float Jarak_M1,Jarak_M2,Jarak_M3;
//extern float dataForward[4], dataInverse[4];

#endif
