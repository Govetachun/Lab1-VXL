/*
 * button2.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#ifndef INC_BUTTON2_H_
#define INC_BUTTON2_H_

#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButtonPress2();

void getKeyInput2();


#endif /* INC_BUTTON2_H_ */
