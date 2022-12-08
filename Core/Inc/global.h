/*
 * global.h
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <string.h>
#include "softwaretime.h"
#include "main.h"
#include  <stdio.h>

#define LED_PERIOD 500
#define PARSER_WAIT 3000
#define SENSOR_READ_PERIOD 500
#define BUFFER_SIZE 30

#define READER_INIT 1
#define READER_READ 2
#define READER_WAIT 3
#define READER_PRINT 4

#define INIT_MODE 5
#define READ_MODE 6
#define PRINT_MODE 7
#define WAIT_MODE 8

#define LED_INIT 9
#define LED_BLINKS 10

extern uint8_t case_parser;
extern uint8_t case_led;
extern uint8_t case_sensor;
extern uint8_t temp;
extern uint32_t ADC_value;
extern uint8_t buffer_flag;
extern uint8_t print;
#endif /* INC_GLOBAL_H_ */
