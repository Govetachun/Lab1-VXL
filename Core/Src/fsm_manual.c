/*
 * fsm_manual.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */


#include "fsm_manual.h"
#include "software_timer.h"
#include "software_timer2.h"

int duration = 0;
void blink_red(){
	if(glitch() == 1){
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
		HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
	}

}
void blink_green(){
	if(glitch() == 1){
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
	HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);


	}
}
void blink_yellow(){
	if(glitch() == 1){
	HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin);
	HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);

	}
}
void fsm_manual_run1(){
	switch (status){

		case MAN_RED:
			status2 = status;

			blink_red();
			duration = 0;
			if(isButtonPress2() ==1){
				timer1_counter +=100;
				stop = 1;
				if(timer1_counter >= 1000){
					timer1_counter = 900;
				}
				if(timer1_counter <= 0){
					timer1_counter = 0;
				}
			}
			if(isButtonPress3() == 1){
				stop = 0;
				setTimer(timer1_counter);
			}

			if(isButtonPress() == 1){
				status = MAN_GREEN;
				timer1_counter = 0;
			}
			break;
		case MAN_GREEN:
			status2 = status;
			blink_green();
			duration = 0;
			if(isButtonPress2() ==1){
				stop = 1;
				timer1_counter +=100;
				if(timer1_counter >= 1000){
					timer1_counter = 900;
				}
				if(timer1_counter <= 0){
					timer1_counter = 0;
				}
			}
			if(isButtonPress3() == 1){
				stop = 0;
				setTimer(timer1_counter);
			}
//			if(timer1_flag == 1){
//				status = AUTO_GREEN;
//				setTimer2(300);
//				setTimer(300);
//			}
			if(isButtonPress() == 1){
				status = MAN_YELLOW;
				timer1_counter = 0;
			}
			break;
		case MAN_YELLOW:
			status2 = status;
			blink_yellow();
			duration = 0;
			if(isButtonPress2() ==1){
				stop = 1;
				timer1_counter +=100;
				if(timer1_counter >= 1000){
					timer1_counter = 900;
				}
				if(timer1_counter <= 0){
					timer1_counter = 0;
				}
			}
			if(isButtonPress3() == 1){
				stop = 0;
				setTimer(timer1_counter);
			}

			if(isButtonPress() == 1){
				status = INIT;
				status2 = INIT;
			}
			break;
		default:
			break;
	}

}

