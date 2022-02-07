/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"
void MRCC_VoidInit( void )
{
#if System_Clock_Source == HSI
	/* Turning on the HSI RC(internal high-speed) clock source */
	SET_BIT(RCC_CR,HSION);
	/*Check if the HSI clock is ready*/
	while(GET_BIT(RCC_CR,HSI_READY_FLAG)==NOT_READY);
	/* Setting the HSI RC(internal high-speed) as the system clock source */
	CLEAR_BIT(RCC_CFGR,0);
	CLEAR_BIT(RCC_CFGR,1);

#elif System_Clock_Source == HSE
	/* Turning on the HSE (external high-speed) clock source */
	SET_BIT(RCC_CR,HSEON);
#if HSE_Bypass_Status==ENABLED
		SET_BIT(RCC_CR,HSEBYP);
#elif HSE_Bypass_Status==DISABLED
		CLEAR_BIT(RCC_CR,HSEBYP);
	/*Check if the HSE clock is ready*/
	while(GET_BIT(RCC_CR,HSE_READY_FLAG)==NOT_READY);
	/* Setting the HSE (external high-speed) as the system clock source */
	SET_BIT(RCC_CFGR,0);
	CLEAR_BIT(RCC_CFGR,1);
#endif

#elif System_Clock_Source == PLL

#if PLL_Clock_Source == HSI_Divided_by_2
		/* Turning on the HSI RC(internal high-speed) clock source */
		SET_BIT(RCC_CR,HSION);
		/*Check if the HSI clock is ready*/
		while(GET_BIT(RCC_CR,HSI_READY_FLAG)==NOT_READY);
		/* Setting the HSI RC(internal high-speed) as the system clock source */
		CLEAR_BIT(RCC_CFGR,0);
		CLEAR_BIT(RCC_CFGR,1);
		/*Select the HSI/2 as the input for the PLL*/
		CLEAR_BIT(RCC_CFGR,PLLSRC);
#elif PLL_Clock_Source ==  HSE
		/* Turning on the HSE (external high-speed) clock source */
		SET_BIT(RCC_CR,HSEON);
		if(HSE_Bypass_Status==ENABLED)
			SET_BIT(RCC_CR,HSEBYP);
		else if(HSE_Bypass_Status==DISABLED)
			CLEAR_BIT(RCC_CR,HSEBYP);
		/*Check if the HSE clock is ready*/
		while(GET_BIT(RCC_CR,HSE_READY_FLAG)==NOT_READY);
		/* Setting the HSE (external high-speed) as the system clock source */
		SET_BIT(RCC_CFGR,0);
		CLEAR_BIT(RCC_CFGR,1);
		/*Select the HSE as the input for the PLL*/
		SET_BIT(RCC_CFGR,PLLSRC);
		/*Select if the HSE clock is devided by 2 or not*/
		RCC_CFGR |= (PLL_HSE_Clock<<17);

	/* Turning on the PLL (PHASE LOCKED LOOP) clock source */
	SET_BIT(RCC_CR,PLLON);
	/* Setting the PLL (PHASE LOCKED LOOP) multiplication factor */
	RCC_CFGR |= (((u32)PLL_MULTIPLICATION_FACTOR)<<18);
	/*Check if the PLL output is ready*/
	while(GET_BIT(RCC_CR,PLL_READY_FLAG)==NOT_READY);
	/* Setting the PLL (PHASE LOCKED LOOP) output as the system clock source */
	SET_BIT(RCC_CFGR,0);
	CLEAR_BIT(RCC_CFGR,1);
#endif
#endif
/* Setting the prescaler values for the AHB/APB1/APB2 buses */
//RCC_CFGR |= (((u32)AHB_BUS_PRESCALER)<<4);
//RCC_CFGR |= (((u32)APB1_BUS_PRESCALER)<<8);
//RCC_CFGR |= (((u32)APB2_BUS_PRESCALER)<<11);
}

void MRCC_VoidEnable_Disable_PeripheralClock (u8 Copy_u8PeripheralBus, u8 Copy_u8PeripheralName, u8 Copy_u8Status )
{
	if((Copy_u8PeripheralName<=31)&&(Copy_u8PeripheralBus<=2))
	{
		switch(Copy_u8PeripheralBus)
		{
		case AHB_BUS:
			if(Copy_u8Status==ENABLED)
				SET_BIT(RCC_AHBENR,Copy_u8PeripheralName);
			else if(Copy_u8Status==DISABLED)
				CLEAR_BIT(RCC_AHBENR,Copy_u8PeripheralName);
			break;

		case APB1_BUS:
			if(Copy_u8Status==ENABLED)
				SET_BIT(RCC_APB1ENR,Copy_u8PeripheralName);
			else if(Copy_u8Status==DISABLED)
				CLEAR_BIT(RCC_APB1ENR,Copy_u8PeripheralName);
			break;

		case APB2_BUS:
			if(Copy_u8Status==ENABLED)
				SET_BIT(RCC_APB2ENR,Copy_u8PeripheralName);
			else if(Copy_u8Status==DISABLED)
				CLEAR_BIT(RCC_APB2ENR,Copy_u8PeripheralName);
			break;
		}
	}
}

