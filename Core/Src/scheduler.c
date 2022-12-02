/*
 * scheduler.c
 *
 *  Created on: Nov 23, 2022
 *      Author: Admin
 */

#include "scheduler.h"
sTasks SCH_tasks_G[SCH_MAX_TASKS];
//uint8_t current_index_task = 0;
#define TICK 10
unsigned char Error_code_G = 0;
void SCH_Init(void){
	unsigned char i;
	for (i = 0;i<SCH_MAX_TASKS;i++){
		SCH_Delete_Task(i);
	}
//	Error_code_G = 0;
	//Timer_init();
	//Watchdog_init();
	//current_index_task = 0;
}
unsigned char SCH_Add_Task (void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD){
//	if (current_index_task < SCH_MAX_TASKS){
//		SCH_tasks_G[current_index_task].pTask = pFunction;
//		SCH_tasks_G[current_index_task].Delay = DELAY;
//		SCH_tasks_G[current_index_task].Period = PERIOD;
//		SCH_tasks_G[current_index_task].RunMe = 0;
//
//		SCH_tasks_G[current_index_task].TaskID = current_index_task;
//		current_index_task++;
//	}
	DELAY = DELAY / TICK;
	PERIOD = PERIOD / TICK;
	unsigned char i = 0;
	while((SCH_tasks_G[i].pTask != 0) && (i<SCH_MAX_TASKS)){
		i++;
	}
//	if(i == SCH_MAX_TASKS){
//		Error_code_G = ERROR_SCH_TOO_MANY_TASKS;
//	}
	SCH_tasks_G[i].pTask = pFunction;
	SCH_tasks_G[i].Delay = DELAY;
	SCH_tasks_G[i].Period = PERIOD;
	SCH_tasks_G[i].RunMe = 0;
	return i;
}

void SCH_Update(void){
//	for (int i =0;i< current_index_task;i++){
//		if(SCH_tasks_G[i].Delay>0){
//			SCH_tasks_G[i].Delay --;
//		}else{
//			SCH_tasks_G[i].Delay = SCH_tasks_G[i].Period;
//			SCH_tasks_G[i].RunMe +=1;
//		}
//	}
	unsigned char index;
	for(index = 0 ;index <SCH_MAX_TASKS;index++){
		if(SCH_tasks_G[index].pTask){
			if(SCH_tasks_G[index].Delay ==0){
				SCH_tasks_G[index].RunMe+=1;
				if(SCH_tasks_G[index].Period){
					SCH_tasks_G[index].Delay = SCH_tasks_G[index].Period;
				}
			}else{
				SCH_tasks_G[index].Delay --;
			}
		}
	}
}
void SCH_Dispatch_Tasks(void){
//	for (int i=0;i<current_index_task;i++){
//		if(SCH_tasks_G[i].RunMe >0){
//			SCH_tasks_G[i].RunMe--;
//			(*SCH_tasks_G[i].pTask)();
//		}
//	}
	unsigned char i;
	for (i=0;i<SCH_MAX_TASKS;i++){
		if(SCH_tasks_G[i].RunMe >0){
			(*SCH_tasks_G[i].pTask)();
			SCH_tasks_G[i].RunMe--;
			if(SCH_tasks_G[i].Period ==0){
				SCH_Delete_Task(i);
			}
		}
	}
}
void SCH_Delete_Task (const int Task_index){
//	unsigned char Return_code;
//	if(SCH_tasks_G[Task_index].pTask ==0){
////
//
//	}else{
//
//	}
	SCH_tasks_G[Task_index].pTask = 0x0000;
	SCH_tasks_G[Task_index].Delay = 0;
	SCH_tasks_G[Task_index].Period = 0;
	SCH_tasks_G[Task_index].RunMe = 0;

//	return Return_code;
}

