/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/28/2021							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "NVIC_private.h"
#include "NVIC_config.h"
#include "NVIC_interface.h"

void MNVIC_VoidSetPriorityGrouping(u32 Copy_u32PriorityGrouping)
{
	SCB_AIRCR = Copy_u32PriorityGrouping;
}

void MNVIC_VoidEnableIRQ(u32 Copy_u32IRQN)
{
	if(Copy_u32IRQN<32)
	{
		SET_BIT(MNVIC->ISER[0],Copy_u32IRQN);
	}
	else
	{
		SET_BIT(MNVIC->ISER[1],Copy_u32IRQN);
	}
}

void MNVIC_VoidDisableIRQ(u32 Copy_u32IRQN)
{
	if(Copy_u32IRQN<32)
	{
		SET_BIT(MNVIC->ICER[0],Copy_u32IRQN);
	}
	else
	{
		SET_BIT(MNVIC->ICER[1],Copy_u32IRQN);
	}
}

u32  MNVIC_U32GetPendingIRQ (u32 Copy_u32IRQN)
{
	if(Copy_u32IRQN<32)
	{
		return GET_BIT(MNVIC->ISPR[0],Copy_u32IRQN);
	}
	else
	{
		return GET_BIT(MNVIC->ISPR[1],Copy_u32IRQN);
	}
}

void MNVIC_VoidSetPendingIRQ (u32 Copy_u32IRQN)
{
	if(Copy_u32IRQN<32)
	{
		SET_BIT(MNVIC->ISPR[0],Copy_u32IRQN);
	}
	else
	{
		SET_BIT(MNVIC->ISPR[1],Copy_u32IRQN);
	}
}

void MNVIC_VoidClearPendingIRQ (u32 Copy_u32IRQN)
{
	if(Copy_u32IRQN<32)
	{
		SET_BIT(MNVIC->ICPR[0],Copy_u32IRQN);
	}
	else
	{
		SET_BIT(MNVIC->ICPR[1],Copy_u32IRQN);
	}
}

void MNVIC_VoidSetPriority (u8 IRQn, u8 priority)
{
	MNVIC->IPR[IRQn];
}

u8 MNVIC_U8GetPriority (u8 IRQn)
{
	return MNVIC->IPR[IRQn];
}

