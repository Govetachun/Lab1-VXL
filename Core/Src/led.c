/*
 * led.c
 *
 *  Created on: Dec 8, 2022
 *      Author: ACER
 */

#include "led.h"

void led_blinky_fsm(void) {
	switch(case_led) {
	case LED_INIT:
		// Initialize timer for led_blinky
		setTimer3(TICK);
		case_led = LED_BLINKS;
		break;

	case LED_BLINKS:
		if(timer3_flag == 1) {
			setTimer3(LED_PERIOD);
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
		}
		break;
	}
}
