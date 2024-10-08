/*
 * softwareTimer.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#include "main.h"

#define TIMER_CYCLE 10

void setTimer(int index, int counter);
void timerRun();
int isTimerExpired(int index);

#endif /* INC_SOFTWARETIMER_H_ */
