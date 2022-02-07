/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/17/2022							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "LEDMATRIX_private.h"
#include "LEDMATRIX_config.h"
#include "LEDMATRIX_interface.h"

void HLEDMATRIX_VoidInit(void)
{
	u8 Local_Counter;
	for(Local_Counter=0; Local_Counter<8; Local_Counter++ )
	{
		MGPIO_VoidSetPinDirection(PUSH_PULL_OUTPUT_2MHZ_PORTS, ROW_PORT, Row_arr[Local_Counter]);
		MGPIO_VoidSetPinDirection(PUSH_PULL_OUTPUT_2MHZ_PORTS, COLUMN_PORT, Col_arr[Local_Counter]);
	}
	for(Local_Counter=0; Local_Counter<8; Local_Counter++ )
	{
		MGPIO_VoidSetPinValue(COLUMN_PORT, Col_arr[Local_Counter], HIGH_PIN);
	}
}


void HLEDMATRIX_VoidPrintCharacter(u8 Copy_u8PtrRowsValues[8])
{
	u8 Local_ColumnCounter, Local_RowCounter, Local_Counter, Local_RowValue;
	for(Local_ColumnCounter=0; Local_ColumnCounter<8; Local_ColumnCounter++ )
	{
		Local_RowValue=Copy_u8PtrRowsValues[Local_ColumnCounter];
		for(Local_RowCounter=0; Local_RowCounter<8; Local_RowCounter++ )
		{
			MGPIO_VoidSetPinValue(ROW_PORT, Row_arr[Local_RowCounter], GET_BIT(Local_RowValue, Local_RowCounter));
		}
		MGPIO_VoidSetPinValue(COLUMN_PORT, Col_arr[Local_ColumnCounter], LOW_PIN);
		MSTK_VoidDelay(250);
		for(Local_Counter=0; Local_Counter<8; Local_Counter++ )
		{
			MGPIO_VoidSetPinValue(COLUMN_PORT, Col_arr[Local_Counter], HIGH_PIN);
		}
	}
}
