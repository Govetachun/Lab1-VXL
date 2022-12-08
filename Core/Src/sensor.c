/*
 * sensor.c
 *
 *  Created on: Dec 8, 2022
 *      Author: ACER
 */


#include "sensor.h"

void uart_commnunication_fsm(void){
	switch(case_sensor){
	case READER_INIT:
		setTimer2(TICK);
		case_sensor = READER_READ;
		break;
	case READER_READ:
		if(print == 0){
			case_sensor = READER_WAIT;
		}

		if(timer2_flag == 1){
			setTimer2(SENSOR_READ_PERIOD);
			readSensor();
		}
		break;

	case READER_WAIT:
		if(print == 1){
			case_sensor = READER_PRINT;
		}
		break;
	case READER_PRINT:
		setTimer2(SENSOR_READ_PERIOD);
		readSensor();
		case_sensor = READER_READ;
		break;
	}

}

