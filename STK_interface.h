/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/10/2022							  ********/
/*****************************************************************************************/
#ifndef STK_interface_H_
#define STK_interface_H_


void MSTK_VoidInit( void );

void MSTK_VoidStartTimer( u32 Copy_u32NumberOfTicks );

u32  MSTK_U8GetSTKValue( void );

u8 	 MSTK_U8GetFlagValue( void );

void MSTK_VoidCallBack( void (*PTR)(void) );

void MSTK_VoidDelay( u32 Copy_u32NumberOfTicks );

#endif
