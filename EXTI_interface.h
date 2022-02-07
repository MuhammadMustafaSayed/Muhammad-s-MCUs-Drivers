/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/3/2022							  ********/
/*****************************************************************************************/
#ifndef EXTI_interface_H_
#define EXTI_interface_H_

/*Choose line num as one of the following chices: EXTILine0, EXTILine1, ...,EXTILine15*/
/*Choose line num as one of the following chices: EXTIA, EXTIB, EXTIC*/
void MEXTI_VoidInit(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTIMode);


/*Choose line num as one of the following chices: EXTILine0, EXTILine1, ...,EXTILine15*/
void MEXTI_VoidSetSensingMode(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTISenseMode);


/*Choose line num as one of the following chices: EXTILine0, EXTILine1, ...,EXTILine15*/
void MEXTI_VoidEnableEXTI(u8 Copy_U8EXTILineNum);



void MEXTI_VoidDisableEXTI(u8 Copy_U8EXTILineNum);



void MEXTI_VoidSoftwareTrigger(u8 Copy_U8EXTILineNum);



void MEXTI_VoidSetCallBack(void (*PTR) (void));

#endif
