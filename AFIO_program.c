/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/10/2022							  ********/
/*****************************************************************************************/
#include "../include/TYPES.h"
#include "../include/MACROS.h"
#include "../include/STATUS.h"
#include "../include/AFIO_private.h"
#include "../include/AFIO_config.h"
#include "../include/AFIO_interface.h"

void MAFIO_VoidSetEXTIPortLine(u8 Copy_U8EXTILineNum, u8 Copy_U8EXTIPort)
{
	MAFIO->AFIO_EXTICR[Copy_U8EXTILineNum/4] = Copy_U8EXTIPort<<(4*(Copy_U8EXTILineNum%4));
}
