/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/10/2022							  ********/
/*****************************************************************************************/
#ifndef AFIO_interface_H_
#define AFIO_interface_H_

/**************************EXTI Lines Definitions**************************/
#define EXTI0	0
#define EXTI1	1
#define EXTI2	2
#define EXTI3	3
#define EXTI4	4
#define EXTI5	5
#define EXTI6	6
#define EXTI7	7
#define EXTI8	8
#define EXTI9	9
#define EXTI10	10
#define EXTI11	11
#define EXTI12	12
#define EXTI13	13
#define EXTI14	14
#define EXTI15	15
/**************************************************************************/

/**************************EXTI Ports Definitions**************************/
#define AFIO_EXTIA	0
#define AFIO_EXTIB	1
#define AFIO_EXTIC	2
/**************************************************************************/

void MAFIO_VoidSetEXTIPortLine(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTIPort);

#endif
