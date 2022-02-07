/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/10/2022							  ********/
/*****************************************************************************************/
#ifndef STK_private_H_
#define STK_private_H_

/*******************STK Registers Addresses Definitions********************/
#define STK_BaseAddress      0xE000E010
typedef struct
{
	volatile u32 STK_CTRL;
	volatile u32 STK_LOAD;
	volatile u32 STK_VAL;
	volatile u32 STK_CALIB;
}MSTK_S;
/**************************************************************************/

/********************STK Registers Pointer Definition**********************/
#define MSTK   ((volatile MSTK_S *)STK_BaseAddress)
/**************************************************************************/

#define STK_Enable  					1
#define STK_DISABLE 					0
#define STK_CLK_SRC_AHB_DIVIDED_By_8	0
#define STK_CLK_SRC_AHB					1
#define COUNTFLAG						16
#define CLKSOURCE						2
#define TICKINT							1
#define ENABLE							0

#endif
