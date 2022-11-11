/*
 * fsm_automatic2.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */

#include "fsm_automatic2.h"
#include "global.h"
#include "global2.h"
#include "software_timer2.h"


void fsm_automatic_run2(){
	switch(status2){
		case INIT:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);

			status2 = AUTO_GREEN;

			setTimer2(300);
			break;
		case AUTO_RED:

			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);

			if(timer2_flag ==1){
				status2 = AUTO_GREEN;
				setTimer2(300);
			}
			if(isButtonPress()==1){
				status2 = MAN_RED;
//				setTimer2(800);
			}
			break;
		case AUTO_GREEN:

			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);

			if(timer2_flag ==1){
				status2 = AUTO_YELLOW;
				setTimer2(200);
			}
			if(isButtonPress()==1){
				status2 = MAN_RED;
//				setTimer2(800);
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);


			if(timer2_flag ==1){
				status2 = AUTO_RED;
				setTimer2(500);
			}
			if(isButtonPress()==1){
				status2 = MAN_RED;
//				setTimer2(800);
			}
			break;
		default:
			break;
	}
}
