/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        1/17/2022							  ********/
/*****************************************************************************************/
#ifndef LEDMATRIX_config_H_
#define LEDMATRIX_config_H_

/****************************LED DOT MATRIX PINS CONFIGURATIONS***************************/
/************************************PIN0/PIN1/PIN2/..************************************/
#define C0_PIN	PIN0
#define C1_PIN	PIN1
#define C2_PIN	PIN2
#define C3_PIN	PIN3
#define C4_PIN	PIN4
#define C5_PIN	PIN5
#define C6_PIN	PIN6
#define C7_PIN	PIN7
#define R0_PIN	PIN6
#define R1_PIN	PIN7
#define R2_PIN	PIN8
#define R3_PIN	PIN9
#define R4_PIN	PIN10
#define R5_PIN	PIN11
#define R6_PIN	PIN12
#define R7_PIN	PIN13
/*****************************************************************************************/


/***************************LED DOT MATRIX PORTS CONFIGURATIONS***************************/
/************************************PORTA/PORTB/PORTC************************************/
#define COLUMN_PORT	PORTA
#define ROW_PORT	PORTB
/*****************************************************************************************/


/*************LED MATRIX ARRAYS OF COLUMNS & ROWS  Definitions*************/
u8 Col_arr[8]={C0_PIN, C1_PIN, C2_PIN, C3_PIN, C4_PIN, C5_PIN, C6_PIN, C7_PIN};
u8 Row_arr[8]={R0_PIN, R1_PIN, R2_PIN, R3_PIN, R4_PIN, R5_PIN, R6_PIN, R7_PIN};
/**************************************************************************/

#endif
