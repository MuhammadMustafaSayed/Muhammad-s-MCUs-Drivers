/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/28/2021							  ********/
/*****************************************************************************************/
#ifndef NVIC_interface_H_
#define NVIC_interface_H_


#define VECTKEY 0x5FA000

/*************************NVIC PRIORITIES GROUPING*************************/
#define _4BitsForGroup0BitsForSub	0x5FA0300
#define _3BitsForGroup1BitsForSub	0x5FA0400
#define _2BitsForGroup2BitsForSub	0x5FA0500
#define _1BitsForGroup3BitsForSub	0x5FA0600
#define _0BitsForGroup4BitsForSub	0x5FA0700
/**************************************************************************/

/********************************NVIC IRQNs********************************/
#define	WWDG			(u8)0
#define PVD				(u8)1
#define TAMPER			(u8)2
#define RTC				(u8)3
#define FLASH			(u8)4
#define RCC				(u8)5
#define EXTI0			(u8)6
#define EXTI1			(u8)7
#define EXTI2			(u8)8
#define EXTI3			(u8)9
#define EXTI4			(u8)10
#define DMA1_CHANNEL1	(u8)11
#define DMA1_CHANNEL2	(u8)12
#define DMA1_CHANNEL3	(u8)13
#define DMA1_CHANNEL4	(u8)14
#define DMA1_CHANNEL5	(u8)15
#define DMA1_CHANNEL6	(u8)16
#define DMA1_CHANNEL7	(u8)17
#define ADC1_2			(u8)18
#define USB_HP_CAN_TX	(u8)19
#define USB_LP_CAN_RX	(u8)20
#define CAN_RX1			(u8)21
#define CAN_SCE			(u8)22
#define EXTI9_5			(u8)23
#define TIM1_BPK		(u8)24
#define TIM1_UP			(u8)25
#define TIM1_TRG_COM	(u8)26
#define TIM1_CC			(u8)27
#define TIM2			(u8)28
#define TIM3			(u8)29
#define TIM4			(u8)30
#define I2C1_EV			(u8)31
#define I2C1_ER			(u8)32
#define I2C2_EV			(u8)33
#define I2C2_ER			(u8)34
#define SPI1			(u8)35
#define SPI2			(u8)36
#define USART1			(u8)37
#define USART2			(u8)38
#define USART3			(u8)39
#define EXTI15_10		(u8)40
#define RTC_ALARM		(u8)41
#define USBWAKEUP		(u8)42
#define TIM8_BPK		(u8)43
#define TIM8_UP			(u8)44
#define TIM8_TRG_COM	(u8)45
#define TIM_CC			(u8)46
#define ADC3			(u8)47
#define FSMC			(u8)48
#define SDIO			(u8)49
#define TIM5			(u8)50
#define SPI3			(u8)51
#define UART4			(u8)52
#define UART5			(u8)53
#define TIM6			(u8)54
#define TIM7			(u8)55
#define DMA2_CHANNEL1	(u8)56
#define DMA2_CHANNEL2	(u8)57
#define DMA2_CHANNEL3	(u8)58
#define DMA2_CHANNEL4_5	(u8)59
/**************************************************************************/

void MNVIC_VoidSetPriorityGrouping(u32 Copy_u32PriorityGrouping);
void MNVIC_VoidEnableIRQ(u32 Copy_u32IRQN);
void MNVIC_VoidDisableIRQ(u32 Copy_u32IRQN);
u32  MNVIC_U32GetPendingIRQ (u32 Copy_u32IRQN);
void MNVIC_VoidSetPendingIRQ (u32 Copy_u32IRQN);
void MNVIC_VoidClearPendingIRQ (u32 Copy_u32IRQN);
void MNVIC_VoidSetPriority (u8 IRQn, u8 priority);
u8   MNVIC_U8GetPriority (u8 IRQn);

#endif
