/*
 * softwaretime.h
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */

#ifndef INC_SOFTWARETIME_H_
#define INC_SOFTWARETIME_H_
#define TICK 10


//extern int traffic_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

//void traffic_Timer(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun(void);

#endif /* INC_SOFTWARETIME_H_ */
