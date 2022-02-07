/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef MACROS_H_
#define MACROS_H_

#define SET_BIT(VAR , BIT) VAR|=(1<<BIT)
#define CLEAR_BIT(VAR , BIT) VAR&=~(1<<BIT)
#define TOGGLE_BIT(VAR , BIT) VAR^=(1<<BIT)
#define GET_BIT(VAR , BIT) ((VAR>>BIT)&1)

#endif
