/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/3/2022							  ********/
/*****************************************************************************************/
#ifndef EXTI_private_H_
#define EXTI_private_H_

/******************EXTI Registers Addresses Definitions*********************/
#define EXTI_BaseAddress     0x40010400
typedef struct
{
	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;
}MEXTI_S;
/**************************************************************************/

/******************EXTI Registers Pointer Definitions**********************/
#define MEXTI       ((volatile MEXTI_S *)EXTI_BaseAddress)
/**************************************************************************/

/**************************EXTI Lines Definitions**************************/
#define EXTILine0	0
#define EXTILine1	1
#define EXTILine2	2
#define EXTILine3	3
#define EXTILine4	4
#define EXTILine5	5
#define EXTILine6	6
#define EXTILine7	7
#define EXTILine8	8
#define EXTILine9	9
#define EXTILine10	10
#define EXTILine11	11
#define EXTILine12	12
#define EXTILine13	13
#define EXTILine14	14
#define EXTILine15	15
/**************************************************************************/

/**************************EXTI Ports Definitions**************************/
#define EXTIA	0
#define EXTIB	1
#define EXTIC	2
/**************************************************************************/

/**********************EXTI Sensing Modes Definitions**********************/
#define EXTIRISING		0
#define EXTIFALLING		1
#define EXTIONCHANGE	2
/**************************************************************************/


#endif
