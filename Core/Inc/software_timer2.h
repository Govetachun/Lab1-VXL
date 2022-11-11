/*
 * software_timer2.h
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER2_H_
#define INC_SOFTWARE_TIMER2_H_

extern int timer2_flag;
extern int timer2_counter;
int glitch2();
void display2();
void clearTimer2();
void setTimer2(int duration);
void timerRun2();

#endif /* INC_SOFTWARE_TIMER2_H_ */
