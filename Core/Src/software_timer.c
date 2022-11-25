/*
 * software_timer.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Admin
 */
#include "software_timer.h"
#include "7led.h"


int timer1_counter = 0;
int timer1_flag = 0;

void clearTimer(){
	timer1_counter=0;
	timer1_flag=0;
}
void setTimer(int duration){
	clearTimer();
	timer1_counter = duration;
}
int glitch(){
	if((timer1_counter % 50 == 0)  ){
		return 1;
	}
	return 0;
}
void display(){
	if(timer1_counter % 100 == 0){
		display7SEG1(timer1_counter/100);
	}

}
void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag = 1;
		}

	}
}

