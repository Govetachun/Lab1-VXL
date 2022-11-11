/*
 * software_timer2.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */

#include "software_timer2.h"
#include "7led.h"
#include "global.h"
#include "global2.h"

int timer2_counter = 0;
int timer2_flag = 0;

void clearTimer2(){
	timer2_counter=0;
	timer2_flag=0;
}
void setTimer2(int duration){
	clearTimer2();
	timer2_counter = duration;
}
int glitch2(){
	if((timer2_counter % 50 == 0)  ){
		return 1;
	}
	return 0;
}
void display2(){
	if(status != status2){
		if(timer2_counter % 100 == 0){
			display7SEG2(timer2_counter/100);
		}
	}else if(status == status2) {
		display7SEG2(status % 10);
	}


}
void timerRun2(){
	if(timer2_counter>0){
		timer2_counter--;
		if(timer2_counter<=0){
			timer2_flag = 1;
		}

	}
}
