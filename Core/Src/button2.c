/*
 * button2.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */


#include "button2.h"
#include "main.h"

int button_flag2= 0;
int keyReg02 = NORMAL_STATE;
int keyReg12 = NORMAL_STATE;
int keyReg22 = NORMAL_STATE;

int keyReg32 = NORMAL_STATE;
int timeForKeyPress2 = 200;

int isButtonPress2(){
	if(button_flag2 ==1){
		button_flag2 = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess2(){
	button_flag2 = 1;
}
void getKeyInput2(){
	keyReg02 = keyReg12;
	keyReg12 = keyReg22;
	keyReg22 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
	if((keyReg02 == keyReg12) && (keyReg12 == keyReg22)){
		if(keyReg32 != keyReg22){
			keyReg32 = keyReg22;
			if(keyReg22 == PRESSED_STATE){
				subKeyProcess2();
				timeForKeyPress2 = 200;
			}
		}else{
			timeForKeyPress2--;
			if (timeForKeyPress2 ==0){
				if(keyReg22 == PRESSED_STATE){
					subKeyProcess2();
				}
//				subKeyProcess();
				timeForKeyPress2 = 200;
			}
		}
	}

}
