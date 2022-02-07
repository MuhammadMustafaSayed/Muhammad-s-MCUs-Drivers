/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef GPIO_interface_H_
#define GPIO_interface_H_

/********************************GPIO PINS MODES AND VALUES*******************************/
#define ANALOG_INPUT_PIN            0x0
#define FLOATING_INPUT_PIN          0x4
#define PULLUP_PULLDOWN_INPUT_PIN   0x8

#define PUSH_PULL_OUTPUT_2MHZ_PIN   0x2
#define PUSH_PULL_OUTPUT_10MHZ_PIN  0x1
#define PUSH_PULL_OUTPUT_50MHZ_PIN  0x3

#define OPEN_DRAIN_OUTPUT_2MHZ_PIN  0x6
#define OPEN_DRAIN_OUTPUT_10MHZ_PIN 0x5
#define OPEN_DRAIN_OUTPUT_50MHZ_PIN 0x7
/*****************************************************************************************/

/*******************************GPIO PORTS MODES AND VALUES*******************************/
#define ANALOG_INPUT_PORTS            0x0
#define FLOATING_INPUT_PORTS          0x44444444
#define PULLUP_PULLDOWN_INPUT_PORTS   0x88888888

#define PUSH_PULL_OUTPUT_2MHZ_PORTS   0x22222222
#define PUSH_PULL_OUTPUT_10MHZ_PORTS  0x11111111
#define PUSH_PULL_OUTPUT_50MHZ_PORTS  0x33333333

#define OPEN_DRAIN_OUTPUT_2MHZ_PORTS  0x66666666
#define OPEN_DRAIN_OUTPUT_10MHZ_PORTS 0x55555555
#define OPEN_DRAIN_OUTPUT_50MHZ_PORTS 0x77777777
/*****************************************************************************************/

/*********************************GPIO PINS DIFINITIONS***********************************/
#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7
#define PIN8	8
#define PIN9	9
#define PIN10	10
#define PIN11	11
#define PIN12	12
#define PIN13	13
#define PIN14	14
#define PIN15	15
/*****************************************************************************************/

/*********************************GPIO PORTSS DIFINITIONS*********************************/
#define PORTA	0
#define PORTB	1
#define PORTC	2
/*****************************************************************************************/

/*************************************GPIO PINS VALUE*************************************/
#define LOW_PIN	    0x0
#define HIGH_PIN	0x1
#define LOW_PORT	0x0
#define HIGH_PORT	0xFFFFFFFF
/*****************************************************************************************/

void MGPIO_VoidSetPinDirection(u8 Copy_u8PinMode, u8 Copy_u8PortNumber, u8 Copy_u8PinNumber);
void MGPIO_VoidSetPinValue(u8 Copy_u8PortNumber, u8 Copy_u8PinNumber, u8 Copy_u8PinValue);
void MGPIO_VoidSetPortDirection(u32 Copy_u32PortMode, u8 Copy_u8PortNumber);
void MGPIO_VoidSetPortValue(u8 Copy_u8PortNumber, u32 Copy_u32PortValue);
u8 MGPIO_U8GetPinValue(u8 Copy_u8PortNumber, u8 Copy_u8PinNumber);

#endif
