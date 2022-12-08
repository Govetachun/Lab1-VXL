/*
 * command_parser.c
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */


#include "command_parser.h"
uint8_t RST = 0;
uint8_t OK = 0;
char *string_b ;
uint8_t buffer[BUFFER_SIZE];
uint8_t buffer_idx = 0;

void command_parser_fsm(){
	switch(case_parser){
	case INIT_MODE:
		if(RST == 1){
			setTimer1(0);
			RST = 0;
			print = 1;
			case_parser = PRINT_MODE;

		}
		break;
	case PRINT_MODE:
		setTimer1(PARSER_WAIT);
		print = 0;
		case_parser = WAIT_MODE;
		break;
	case WAIT_MODE:
		if(RST == 1){
			setTimer1(0);
			RST = 0;
			print = 1;
			case_parser = PRINT_MODE;
			break;
		}

		if(OK == 1){
			setTimer1(0);
			OK = 0;
			print = 0;
			case_parser = INIT_MODE;
			break;
		}
		if(timer1_flag == 1){
			setTimer1(0);
			clear();
			print = 1;
			case_parser = PRINT_MODE;
			break;
		}
		setTimer1(PARSER_WAIT);
		break;
	}
}
void clear(void){
	for (int i = 0;i<BUFFER_SIZE ; i++){
		buffer[i] = 0;
	}
	buffer_idx=0;
}
int isRST(void){
	char* query = (char*)"!RST#";
	if(strcmp(query ,string_b) == 0){
		return 1;
	}
	return 0;
}
int isOK(void){
	char* stop = (char*)"!OK#";
	if(strcmp(stop , string_b) == 0){
		return 1;
	}
	return 0;
}
void update_Buffer(uint8_t tempo){
	uint8_t* enter = (uint8_t*)"#";
	buffer[buffer_idx] = tempo;
	buffer_idx = (buffer_idx +1 ) ;
	if(*enter == tempo){
		RST = isRST();
		OK = isOK();
		clear();
	}

	string_b = (char *)buffer;

}
