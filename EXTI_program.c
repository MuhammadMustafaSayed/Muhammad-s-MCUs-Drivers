/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/3/2022							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "EXTI_private.h"
#include "EXTI_config.h"
#include "EXTI_interface.h"

void MEXTI_VoidInit(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTIMode)
{
	switch(Copy_U8EXTIMode)
	{
	case EXTIRISING:

		break;
	case EXTIFALLING:

		break;
	case EXTIONCHANGE:

		break;
	}
}

void MEXTI_VoidSetSensingMode(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTISenseMode)
{
	switch(Copy_U8EXTISenseMode)
	{
	case EXTIRISING:
		SET_BIT(MEXTI->RTSR, Copy_U8EXTILineNum);
		break;
	case EXTIFALLING:
		SET_BIT(MEXTI->FTSR, Copy_U8EXTILineNum);
		break;
	case EXTIONCHANGE:
		SET_BIT(MEXTI->RTSR, Copy_U8EXTILineNum);
		SET_BIT(MEXTI->FTSR, Copy_U8EXTILineNum);
		break;
	}
}

void MEXTI_VoidEnableEXTI(u8 Copy_U8EXTILineNum)
{
	SET_BIT(MEXTI->IMR, Copy_U8EXTILineNum);
}

void MEXTI_VoidDisableEXTI(u8 Copy_U8EXTILineNum)
{
	CLEAR_BIT(MEXTI->IMR, Copy_U8EXTILineNum);
}

void MEXTI_VoidSoftwareTrigger(u8 Copy_U8EXTILineNum)
{
	SET_BIT(MEXTI->SWIER, Copy_U8EXTILineNum);
}

void MEXTI_VoidClearPendingFlag(u8 Copy_U8EXTILineNum)
{
	SET_BIT(MEXTI->PR, Copy_U8EXTILineNum);
}

void MEXTI_VoidSetCallBack(void (*PTR) (void))
{

}
