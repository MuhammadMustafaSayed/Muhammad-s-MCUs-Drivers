/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/10/2022							  ********/
/*****************************************************************************************/
#ifndef AFIO_private_H_
#define AFIO_private_H_

/******************EXTI Registers Addresses Definitions********************/
#define AFIO_BaseAddress     0x40010000
typedef struct
{
	volatile u32 AFIO_EVCR;
	volatile u32 AFIO_MAPR;
	volatile u32 AFIO_EXTICR[4];
	volatile u32 AFIO_MAPR2;
}MAFIO_S;
/**************************************************************************/

/******************EXTI Registers Pointers Definitions*********************/
#define MAFIO   ((volatile MAFIO_S *)AFIO_BaseAddress)
/**************************************************************************/

#endif
