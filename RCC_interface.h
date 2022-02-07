/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef RCC_interface_H_
#define RCC_interface_H_

/********************************SYSTEM BUSES DEFINITIONS*********************************/
#define AHB_BUS  0
#define APB1_BUS 1
#define APB2_BUS 2
/*****************************************************************************************/

/***********************************AHB BUS PERIPHERALS***********************************/
#define	DMA1  0
#define DMA2  1
#define SRAM  2
#define FLITF 4
#define CRC   6
#define FSMC  8
#define SDIO  10
/*****************************************************************************************/

/***********************************APB1 BUS PERIPHERALS**********************************/
#define	TIM2      0
#define	TIM3      1
#define	TIM4      2
#define	TIM5      3
#define	TIM6      4
#define	TIM7      5
#define	TIM12     6
#define	TIM13     7
#define	TIM14     8
#define	WWDG      11
#define	SPI2      14
#define	SPI3      15
#define	USART2    17
#define	USART3    18
#define	USART4    19
#define	USART5    20
#define	I2C1      21
#define	I2C2      22
#define	USB       23
#define	CAN25     24
#define	BKP27     25
#define	PWR       26
#define	DAC       27
/*****************************************************************************************/

/***********************************APB2 BUS PERIPHERALS**********************************/
#define	AFIO      0
#define	IOPA      2
#define	IOPB      3
#define	IOPC      4
#define	IOPD      5
#define	IOPE      6
#define	IOPF      7
#define	IOPG	  8
#define	ADC1	  9
#define	ADC2	  10
#define	TIM1	  11
#define	SPI1	  12
#define	TIM8	  13	
#define	USART1 	  14
#define	ADC3      15
#define	TIM9      19
#define	TIM10     20
#define	TIM11     21
/*****************************************************************************************/

/************************************AHB BUS PRESCALER************************************/
#define	SYSTEM_CLOCK_NOT_DIVIDED   	    0
#define SYSTEM_CLOCK_DIVIDED_BY_2  	    8
#define SYSTEM_CLOCK_DIVIDED_BY_4 	    9
#define SYSTEM_CLOCK_DIVIDED_BY_8       10
#define SYSTEM_CLOCK_DIVIDED_BY_16      11
#define SYSTEM_CLOCK_DIVIDED_BY_64      12
#define SYSTEM_CLOCK_DIVIDED_BY_128     13
#define SYSTEM_CLOCK_DIVIDED_BY_256     14
#define SYSTEM_CLOCK_DIVIDED_BY_512     15
/*****************************************************************************************/

/***********************************APB BUSES PRESCALER**********************************/
#define	HCLOCK_NOT_DIVIDED   	    0
#define HCLOCK_DIVIDED_BY_2  	    4
#define HCLOCK_DIVIDED_BY_4 	    5
#define HCLOCK_DIVIDED_BY_8         6
#define HCLOCK_DIVIDED_BY_16        7
/*****************************************************************************************/

/***********************************SYSTEM CLOCK SOURCE***********************************/
#define	HSI       0
#define	HSE       1
#define	PLL       2
/*****************************************************************************************/

/*************************************PLL CLOCK SOURCE************************************/
#define	HSI_Divided_by_2       0
#define	HSE_Clock              1
/*****************************************************************************************/

/**************************************PLL HSE Clock**************************************/
#define	HSE_Clock_Not_Divided        0
#define	HSE_Clock_Divided_By_2       1
/*****************************************************************************************/

/***********************************SYSTEM CLOCK STATUS***********************************/
#define	NOT_READY      0
#define	READY          1
#define HSI_READY_FLAG 1
#define HSE_READY_FLAG 17
#define PLL_READY_FLAG 25
#define HSION		   0
#define HSEON		   16
#define PLLSRC		   16
#define PLLXTPRE	   17
#define HSEBYP		   18
#define PLLON          24
/*****************************************************************************************/

/********************************PLL MULTIPLICATION FACTORS*******************************/
#define	PLL_MULTIPLY_BY_2     0
#define	PLL_MULTIPLY_BY_3     1
#define	PLL_MULTIPLY_BY_4     2
#define	PLL_MULTIPLY_BY_5     3
#define	PLL_MULTIPLY_BY_6     4
#define	PLL_MULTIPLY_BY_7     5
#define	PLL_MULTIPLY_BY_8     6
#define	PLL_MULTIPLY_BY_9	  7
#define	PLL_MULTIPLY_BY_10	  8
#define	PLL_MULTIPLY_BY_11	  9
#define	PLL_MULTIPLY_BY_12	  10
#define	PLL_MULTIPLY_BY_13	  11
#define	PLL_MULTIPLY_BY_14	  12	
#define	PLL_MULTIPLY_BY_15 	  13
#define	PLL_MULTIPLY_BY_16    14
/*************************NOTE THAT THE OUTPUT MUST NOT EXCEED 72MHZ**********************/
/*****************************************************************************************/

/***********************************FUNCTIONS PROTOTYPES**********************************/
void MRCC_VoidInit( void );
void MRCC_VoidEnable_Disable_PeripheralClock (u8 Copy_u8PeripheralBus, u8 Copy_u8PeripheralName, u8 Copy_u8Status );
/*****************************************************************************************/

#endif
