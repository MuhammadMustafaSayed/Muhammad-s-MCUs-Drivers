/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/28/2021							  ********/
/*****************************************************************************************/
#ifndef NVIC_private_H_
#define NVIC_private_H_

/******************NVIC Registers Addresses Definitions*********************/
#define NVIC_BaseAddress      0xE000E100
#define SCB_BaseAddress		  0xE000E008
typedef struct
{
	volatile u32 ISER[3];
	volatile u32 ICER[3];
	volatile u32 ISPR[3];
	volatile u32 ICPR[3];
	volatile u32 IABR[3];
	volatile u8  IPR[84];
}MNVIC_S;
#define NVIC_STIR_Offset      0xE00
#define SCB_AIRCR_Offset      0x0C
/**************************************************************************/

/******************NVIC Registers Pointers Definitions**********************/
#define MNVIC       	 ((volatile MNVIC_S *)NVIC_BaseAddress)
#define NVIC_STIR       *(volatile u32 *)(NVIC_BaseAddress+NVIC_STIR_Offset)
#define SCB_AIRCR       *(volatile u32 *)(SCB_BaseAddress+SCB_AIRCR_Offset)
/**************************************************************************/


#endif
