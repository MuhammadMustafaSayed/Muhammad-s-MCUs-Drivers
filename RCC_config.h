/*****************************************************************************************/
/********					Author :    Muhammad Mustafa			  			  ********/
/********					Version:    	   V01				 				  ********/
/********					Date   :        12/16/2021							  ********/
/*****************************************************************************************/
#ifndef RCC_config_H_
#define RCC_config_H_

/******************CHOOSE ONE OF THE FOLLOWING AS A SYSTEM CLOCK SOURCE*******************/
/*											1-HSI       								 */       
/*											2-HSE       								 */       
/*											3-PLL       								 */	
/*****************************************************************************************/
#define System_Clock_Source					  HSI




/**************CHOOSE ONE OF THE FOLLOWING AS A CLOCK SECURITY SYSTEM STATUS**************/
/*											1-DISABLED      							 */       
/*											2-ENABLED       							 */       
/*****************************************************************************************/
#define Clock_Security_Sustem				  DISABLED




/****************CHOOSE ONE OF THE FOLLOWING AS A PLL MULTIPLICATION FACTOR***************/
/*											1-PLL_MULTIPLY_BY_2							 */
/*											2-PLL_MULTIPLY_BY_3     					 */
/*											3-PLL_MULTIPLY_BY_4     					 */
/*											4-PLL_MULTIPLY_BY_5     					 */
/*											5-PLL_MULTIPLY_BY_6     					 */	
/*											6-PLL_MULTIPLY_BY_7     					 */
/*											7-PLL_MULTIPLY_BY_8     					 */
/*											8-PLL_MULTIPLY_BY_9	  						 */	
/*											9-PLL_MULTIPLY_BY_10	 					 */
/*											10-PLL_MULTIPLY_BY_11	 					 */
/*											11-PLL_MULTIPLY_BY_12	  					 */
/*											12-PLL_MULTIPLY_BY_13	  					 */
/*											13-PLL_MULTIPLY_BY_14	  					 */
/*											14-PLL_MULTIPLY_BY_15 	 					 */
/*											15-PLL_MULTIPLY_BY_16          				 */
/*****************************************************************************************/
#define PLL_MULTIPLICATION_FACTOR			  PLL_MULTIPLY_BY_2




/****************CHOOSE ONE OF THE FOLLOWING AS A HSE CLOCK BYPASS STATUS*****************/
/*											1-DISABLED      							 */       
/*											2-ENABLED       							 */       
/*****************************************************************************************/
#define HSE_Bypass_Status           		  DISABLED




/*******************CHOOSE ONE OF THE FOLLOWING AS THE AHB BUS PRESCALER******************/
/*											1-SYSTEM_CLOCK_NOT_DIVIDED   	    		 */
/*											2-SYSTEM_CLOCK_DIVIDED_BY_2  	    		 */
/*											3-SYSTEM_CLOCK_DIVIDED_BY_4 	    		 */
/*											4-SYSTEM_CLOCK_DIVIDED_BY_8       		 	 */
/*											5-SYSTEM_CLOCK_DIVIDED_BY_16      			 */
/*											6-SYSTEM_CLOCK_DIVIDED_BY_64      			 */
/*											7-SYSTEM_CLOCK_DIVIDED_BY_128     			 */
/*											8-SYSTEM_CLOCK_DIVIDED_BY_256     			 */
/*											9-SYSTEM_CLOCK_DIVIDED_BY_512     			 */
/*****************************************************************************************/
#define AHB_BUS_PRESCALER					  SYSTEM_CLOCK_NOT_DIVIDED




/******************CHOOSE ONE OF THE FOLLOWING AS THE APB BUSES PRESCALER*****************/
/*											1-HCLOCK_NOT_DIVIDED   	    				 */
/*											2-HCLOCK_DIVIDED_BY_2  	    				 */
/*											3-HCLOCK_DIVIDED_BY_4 	    				 */
/*											4-HCLOCK_DIVIDED_BY_8         				 */
/*											5-HCLOCK_DIVIDED_BY_16        				 */
/*****************************************************************************************/
#define APB1_BUS_PRESCALER					  HCLOCK_NOT_DIVIDED
#define APB2_BUS_PRESCALER					  HCLOCK_NOT_DIVIDED




/********************CHOOSE ONE OF THE FOLLOWING AS A PLL CLOCK SOURCE********************/
/*											1-HSI_Divided_by_2       					 */
/*											2-HSE_Clock        							 */
/*****************************************************************************************/      
#define PLL_Clock_Source            		  HSE_Clock




/**********************CHOOSE ONE OF THE FOLLOWING AS A PLL HSE Clock*********************/
/*											1-HSE_Clock_Not_Divided       				 */
/*											2-HSE_Clock_Divided_By_2        			 */
/*****************************************************************************************/  
#define PLL_HSE_Clock						  HSE_Clock_Not_Divided

#endif
