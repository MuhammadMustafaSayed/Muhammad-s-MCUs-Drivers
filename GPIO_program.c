/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/19/2021							  ********/
/*****************************************************************************************/
#include "TYPES.h"
#include "MACROS.h"
#include "STATUS.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"



void MGPIO_VoidSetPinDirection(u8 Copy_u8PinMode, u8 Copy_u8PortNumber, u8 Copy_u8PinNumber)
{
	if(Copy_u8PinNumber<8)
	{
		switch(Copy_u8PortNumber)
		{
		case(PORTA):
				GPIOA->CRL&=~(15<<(4*Copy_u8PinNumber));
				GPIOA->CRL|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		case(PORTB):
				GPIOB->CRL&=~(15<<(4*Copy_u8PinNumber));
				GPIOB->CRL|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		case(PORTC):
				GPIOC->CRL&=~(15<<(4*Copy_u8PinNumber));
				GPIOC->CRL|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		}
	}
	else if(Copy_u8PinNumber<16)
	{
		Copy_u8PinNumber %= 8;

		switch(Copy_u8PortNumber)
		{
		case(PORTA):
				GPIOA->CRH&=~(15<<(4*Copy_u8PinNumber));
				GPIOA->CRH|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		case(PORTB):
				GPIOB->CRH&=~(15<<(4*Copy_u8PinNumber));
				GPIOB->CRH|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		case(PORTC):
				GPIOC->CRH&=~(15<<(4*Copy_u8PinNumber));
				GPIOC->CRH|=(Copy_u8PinMode<<(4*Copy_u8PinNumber));
		break;
		}
	}
}


void MGPIO_VoidSetPinValue(u8 Copy_u8PortNumber, u8 Copy_u8PinNumber, u8 Copy_u8PinValue)
{
	switch(Copy_u8PinValue)
	{
	case(LOW_PIN):
			switch(Copy_u8PortNumber)
			{
			case(PORTA):
					GPIOA->BRR=1<<Copy_u8PinNumber;
			break;
			case(PORTB):
					GPIOB->BRR=1<<Copy_u8PinNumber;
			break;
			case(PORTC):
					GPIOC->BRR=1<<Copy_u8PinNumber;
			break;
			}
	break;
	case(HIGH_PIN):
			switch(Copy_u8PortNumber)
			{
			case(PORTA):
					GPIOA->BSRR=1<<Copy_u8PinNumber;
			break;
			case(PORTB):
					GPIOB->BSRR=1<<Copy_u8PinNumber;
			break;
			case(PORTC):
					GPIOC->BSRR=1<<Copy_u8PinNumber;
			break;
			}

	break;
	}
}


void MGPIO_VoidSetPortDirection(u32 Copy_u32PortMode, u8 Copy_u8PortNumber)
{
	switch(Copy_u8PortNumber)
	{
	case(PORTA):
			GPIOA->CRL=Copy_u32PortMode;
			GPIOA->CRH=Copy_u32PortMode;
	break;
	case(PORTB):
			GPIOB->CRL=Copy_u32PortMode;
			GPIOB->CRH=Copy_u32PortMode;
	break;
	case(PORTC):
			GPIOC->CRL=Copy_u32PortMode;
			GPIOC->CRH=Copy_u32PortMode;
	break;
	}
}


void MGPIO_VoidSetPortValue(u8 Copy_u8PortNumber, u32 Copy_u32PortValue)
{
	switch(Copy_u8PortNumber)
	{
			case(PORTA):
					GPIOA->ODR=Copy_u32PortValue;
			break;
			case(PORTB):
					GPIOB->ODR=Copy_u32PortValue;
			break;
			case(PORTC):
					GPIOC->ODR=Copy_u32PortValue;
			break;
	}
}


u8 MGPIO_U8GetPinValue(u8 Copy_u8PortNumber, u8 Copy_u8PinNumber)
{
	u8 Pin_Value=0;
	switch(Copy_u8PortNumber)
	{
	case(PORTA):
			Pin_Value=GET_BIT(GPIOA->IDR,Copy_u8PinNumber);
	break;
	case(PORTB):
			Pin_Value=GET_BIT(GPIOB->IDR,Copy_u8PinNumber);
	break;
	case(PORTC):
			Pin_Value=GET_BIT(GPIOC->IDR,Copy_u8PinNumber);
	break;
	}
	return Pin_Value;
}
