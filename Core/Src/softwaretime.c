/*
 * softwaretime.c
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */
#include "softwaretime.h"

int traffic_flag = 0;
int traffic_count = 0;

int timer1_flag = 0;
int count1 = 0;

int timer2_flag = 0;
int count2 = 0;

int timer3_flag = 0;
int count3 = 0;



void setTimer1(int duration ){
	timer1_flag = 0;
	count1 = duration / TICK;
}

void setTimer2(int duration){
	timer2_flag = 0;
	count2 = duration / TICK;
}

void setTimer3(int duration){
	timer3_flag = 0;
	count3 = duration / TICK;
}

void timerRun(){

	if(count1 >0){
		count1--;
		if(count1<=0){
			timer1_flag = 1;
		}
	}

	if(count2 > 0){
		count2--;
		if(count2 <= 0){
			timer2_flag = 1;
		}
	}

	if(count3 > 0){
		count3--;
		if(count3<=0){
			timer3_flag = 1;
		}
	}
}
