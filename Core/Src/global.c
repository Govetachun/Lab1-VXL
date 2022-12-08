/*
 * glob.c
 *
 *  Created on: Dec 8, 2022
 *      Author: ACER
 */
#include "global.h"

uint8_t case_parser = INIT_MODE;
uint8_t case_led = LED_INIT;
uint8_t case_sensor = READER_INIT;

uint8_t temp = 0;
uint32_t ADC_value = 0;
uint8_t buffer_flag = 0;

uint8_t print = 0;

