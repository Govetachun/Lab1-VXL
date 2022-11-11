/*
 * button3.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#include "button3.h"
#include "main.h"

int button_flag3= 0;
int keyReg03 = NORMAL_STATE;
int keyReg13 = NORMAL_STATE;
int keyReg23 = NORMAL_STATE;

int keyReg33 = NORMAL_STATE;
int timeForKeyPress3 = 200;

int isButtonPress3(){
	if(button_flag3 ==1){
		button_flag3 = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess3(){
	button_flag3 = 1;
}
void getKeyInput3(){
	keyReg03 = keyReg13;
	keyReg13 = keyReg23;
	keyReg23 = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
	if((keyReg03 == keyReg13) && (keyReg13 == keyReg23)){
		if(keyReg33 != keyReg23){
			keyReg33 = keyReg23;
			if(keyReg23 == PRESSED_STATE){
				subKeyProcess3();
				timeForKeyPress3 = 200;
			}
		}else{
			timeForKeyPress3--;
			if (timeForKeyPress3 ==0){
				if(keyReg23== PRESSED_STATE){
					subKeyProcess3();
				}
//				subKeyProcess();
				timeForKeyPress3 = 200;
			}
		}
	}

}
