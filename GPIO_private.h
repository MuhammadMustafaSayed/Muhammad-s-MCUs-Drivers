/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef GPIO_private_H_
#define GPIO_private_H_

/******************GPIO Registers Addresses Definitions*********************/
#define GPIOA_BaseAddress     0x40010800
#define GPIOB_BaseAddress     0x40010C00
#define GPIOC_BaseAddress     0x40011000
/***************************************************************************/

/******************GPIO Registers Structure Definitions**********************/
typedef struct
{
	volatile u32 CRL;
	volatile u32 CRH;
	volatile u32 IDR;
	volatile u32 ODR;
	volatile u32 BSRR;
	volatile u32 BRR;
	volatile u32 LCKR;

}GPIO;
/***************************************************************************/

/******************GPIO Registers Pointers Definitions**********************/
#define GPIOA      ((volatile GPIO*)GPIOA_BaseAddress)
#define GPIOB      ((volatile GPIO*)GPIOB_BaseAddress)
#define GPIOC      ((volatile GPIO*)GPIOC_BaseAddress)
/***************************************************************************/

#endif
