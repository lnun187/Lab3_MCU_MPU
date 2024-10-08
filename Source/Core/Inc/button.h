/*
 * button.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

// we aim to work with more than one buttons
#define N0_OF_BUTTONS 3
// timer interrupt duration is 10ms , so to pass 1 second ,
// we need to jump to the interrupt service routine 100 time
#define DURATION_FOR_AUTO_INCREASING 50
#define BUTTON_IS_PRESSED GPIO_PIN_RESET
#define BUTTON_IS_RELEASED GPIO_PIN_SET
#define TIMER_CYCLE 10

void buttonReading();
int isButtonPressed(unsigned int index);
int isButtonPressed1s(unsigned int index);

#endif /* INC_BUTTON_H_ */
