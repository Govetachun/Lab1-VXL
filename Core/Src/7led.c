/*
 * 7led.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */
#include "7led.h"

void display7SEG1(int num){
	if(num == 0){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 1){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 2){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 3){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 4){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 5){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 6){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 7){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET ) ;
	}else if(num == 8){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 9){
		HAL_GPIO_WritePin ( LED0_GPIO_Port , LED0_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET ) ;
	}
}
void display7SEG2(int num){
	if(num == 0){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_SET ) ;
	}else if(num == 1){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_SET ) ;
	}else if(num == 2){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 3){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 4){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 5){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 6){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 7){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_SET ) ;
	}else if(num == 8){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}else if(num == 9){
		HAL_GPIO_WritePin ( LED02_GPIO_Port , LED02_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED12_GPIO_Port , LED12_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED22_GPIO_Port , LED22_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED32_GPIO_Port , LED32_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED42_GPIO_Port , LED42_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED52_GPIO_Port , LED52_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED62_GPIO_Port , LED62_Pin , GPIO_PIN_RESET ) ;
	}
}

