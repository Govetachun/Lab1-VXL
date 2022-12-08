/*
 * command_parser.h
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_


#include "global.h"

void command_parser_fsm(void);
void update_Buffer(uint8_t temp);
void clear(void);
int isRST(void);
int isOK(void);
#endif /* INC_COMMAND_PARSER_H_ */
