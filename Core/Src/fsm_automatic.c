/*
 * fsm_automatic.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */
#include "fsm_automatic.h"

#include "software_timer.h"
int time_red = 500;
int time_green = 300;
int time_yellow = 200;
int time_delay = 800;


void fsm_automatic_run1(){
	switch(status){
		case INIT:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

			status = AUTO_RED;

			setTimer(time_red);
			break;
		case AUTO_RED:

			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

			if(timer1_flag ==1){
				status = AUTO_GREEN;
				setTimer(time_green);
			}
			if(isButtonPress()==1){
				status = MAN_RED;
				timer1_counter = 0;
			}
			break;
		case AUTO_GREEN:

			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);

			if(timer1_flag ==1){
				status = AUTO_YELLOW;
				setTimer(time_yellow);
			}
			if(isButtonPress()==1){
				status = MAN_RED;
				timer1_counter = 0;
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);


			if(timer1_flag ==1){
				status = AUTO_RED;
				setTimer(time_red);
			}
			if(isButtonPress()==1){
				status = MAN_RED;
				timer1_counter = 0;
			}
			break;
		default:
			break;
	}
}
