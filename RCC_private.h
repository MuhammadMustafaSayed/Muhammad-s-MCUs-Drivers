/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef RCC_private_H_
#define RCC_private_H_

/******************RCC Registers Addresses Definitions*********************/
#define RCC_BaseAddress     0x40021000
#define RCC_CR_Offset       0x00
#define RCC_CFGR_Offset     0x04
#define RCC_CIR_Offset      0x08
#define RCC_APB2RSTR_Offset 0x0C
#define RCC_APB1RSTR_Offset 0x010
#define RCC_AHBENR_Offset   0x14
#define RCC_APB2ENR_Offset  0x18
#define RCC_APB1ENR_Offset  0x1C
#define RCC_BDCR_Offset     0x20
#define RCC_CSR_Offset      0x24
/**************************************************************************/

/******************RCC Registers Pointers Definitions**********************/
#define RCC_CR       *(volatile u32 *)(RCC_BaseAddress+RCC_CR_Offset)
#define RCC_CFGR     *(volatile u32 *)(RCC_BaseAddress+RCC_CFGR_Offset)
#define RCC_CIR      *(volatile u32 *)(RCC_BaseAddress+RCC_CIR_Offset)
#define RCC_APB2RSTR *(volatile u32 *)(RCC_BaseAddress+RCC_APB2RSTR_Offset)
#define RCC_APB1RSTR *(volatile u32 *)(RCC_BaseAddress+RCC_APB1RSTR_Offset)
#define RCC_AHBENR   *(volatile u32 *)(RCC_BaseAddress+RCC_AHBENR_Offset)
#define RCC_APB2ENR  *(volatile u32 *)(RCC_BaseAddress+RCC_APB2ENR_Offset)
#define RCC_APB1ENR  *(volatile u32 *)(RCC_BaseAddress+RCC_APB1ENR_Offset)
#define RCC_BDCR     *(volatile u32 *)(RCC_BaseAddress+RCC_BDCR_Offset)
#define RCC_CSR      *(volatile u32 *)(RCC_BaseAddress+RCC_CSR_Offset)
/**************************************************************************/

#endif
