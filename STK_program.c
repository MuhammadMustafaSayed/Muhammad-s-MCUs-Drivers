/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/3/2022							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "STK_private.h"
#include "STK_config.h"
#include "STK_interface.h"

void (*MSTK_CallBack)(void)=0;
void MSTK_VoidInit( void )
{
#if STK_INTERRUPT_STATUS == STK_INTERRUPT_ENABLE
	 SET_BIT(MSTK->STK_CTRL, TICKINT);
#endif

#if STK_CLK_SRC	== STK_CLK_SRC_AHB
	 SET_BIT(MSTK->STK_CTRL, CLKSOURCE);
#endif
}

void MSTK_VoidStartTimer( u32 Copy_u32NumberOfTicks )
{
	MSTK->STK_LOAD = Copy_u32NumberOfTicks;
	MSTK->STK_VAL  = 0 ;
	SET_BIT(MSTK->STK_CTRL, ENABLE);
}

void MSTK_VoidDelay( u32 Copy_u32NumberOfTicks )
{
	MSTK->STK_LOAD = Copy_u32NumberOfTicks;
	MSTK->STK_VAL  = 0 ;
	SET_BIT(MSTK->STK_CTRL, ENABLE);
	while(MSTK_U8GetSTKValue()!=0);
	CLEAR_BIT(MSTK->STK_CTRL, ENABLE);
}

u32  MSTK_U8GetSTKValue( void )
{
	u32 value=0;
	value = MSTK->STK_VAL;
	return value;
}

u8 	 MSTK_U8GetCountFlagValue( void )
{
	u8 value=0;
	value = GET_BIT(MSTK->STK_VAL, COUNTFLAG);
	return value;
}

void MSTK_VoidSetCallBack( void (*PTR)(void) )
{
	MSTK_CallBack = PTR;
}
