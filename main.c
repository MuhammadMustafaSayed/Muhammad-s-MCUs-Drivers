/*
 * main.c
 *
 *  Created on: Dec 19, 2021
 *      Author: Muhammad1907
 */
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "AFIO_interface.h"
#include "NVIC_interface.h"
#include "EXTI_interface.h"
#include "STK_interface.h"
#include "LEDMATRIX_interface.h"

void main(void)
{
	/*u32 counter;

		MRCC_VoidInit();
		MSTK_VoidInit();
		MRCC_VoidEnable_Disable_PeripheralClock(APB2_BUS, IOPA, ENABLED);
		MGPIO_VoidSetPinDirection(PUSH_PULL_OUTPUT_10MHZ_PIN, PORTA, PIN0);
		MSTK_VoidStartTimer(1000000);
		while(1)
		{
			MGPIO_VoidSetPinvalue(PORTA, PIN0, HIGH_PIN);
			while(MSTK_U8GetSTKValue()<500000);
			MGPIO_VoidSetPinvalue(PORTA, PIN0, LOW_PIN);
			while(MSTK_U8GetSTKValue()>500000);
		}*/
	/*MGPIO_VoidSetPinvalue(PORTA, PIN0, HIGH_PIN);
	for(counter=0; counter<=1000000; counter++);
	MGPIO_VoidSetPinvalue(PORTA, PIN0, LOW_PIN);
	for(counter=0; counter<=1000000; counter++);*/
	u8 arr[8]={17, 37, 65, 72, 65, 37, 17, 0};
	MRCC_VoidInit();
	MSTK_VoidInit();
	MRCC_VoidEnable_Disable_PeripheralClock(APB2_BUS, IOPA, ENABLED);
	MRCC_VoidEnable_Disable_PeripheralClock(APB2_BUS, IOPB, ENABLED);
	HLEDMATRIX_VoidInit();
	while(1)
	{
	HLEDMATRIX_VoidPrintCharacter(arr);
	}


}

