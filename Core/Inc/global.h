/*
 * global.h
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "button2.h"
#include "button3.h"

#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4

#define MAN_RED 22
#define MAN_GREEN 23
#define MAN_YELLOW 24

extern int stop;
extern int status;
extern int status2;
#endif /* INC_GLOBAL_H_ */
