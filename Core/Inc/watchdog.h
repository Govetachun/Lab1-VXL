/*
 * watchdog.h
 *
 *  Created on: Nov 23, 2022
 *      Author: Admin
 */

#ifndef INC_WATCHDOG_H_
#define INC_WATCHDOG_H_

void MX_IWDG_Init(void);
void Watchdog_Refresh(void);
unsigned char Is_Watchdog_Reset(void);
void Watchdog_Counting ( void ) ;
void Reset_Watchdog_Counting ( void );

#endif /* INC_WATCHDOG_H_ */
