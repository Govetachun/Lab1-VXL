/*
 * software_timer.h
 *
 *  Created on: Nov 2, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer1_counter;
int glitch();
void display();
void clearTimer();
void setTimer(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
