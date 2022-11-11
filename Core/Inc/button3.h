/*
 * button3.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Admin
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButtonPress3();

void getKeyInput3();

#endif /* INC_BUTTON3_H_ */
