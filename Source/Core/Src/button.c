/*
 * button.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Admin
 */

#ifndef SRC_BUTTON_C_
#define SRC_BUTTON_C_

#include "button.h"
// the buffer that the final result is stored after
// debouncing
GPIO_PinState buttonBuffer[N0_OF_BUTTONS] = { 1, 1, 1 };
// we define two buffers for debouncing
GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS] = { 1 };
GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS] = { 1 };
// we define a flag for a button pressed more than 1 second .
uint8_t flagForButtonPress1s[N0_OF_BUTTONS];
// we define counter for automatically increasing the value
// after the button is pressed more than 1 second .
uint16_t counterForButtonPress1s[N0_OF_BUTTONS];
int count;
GPIO_TypeDef *port[N0_OF_BUTTONS] = { butt1_GPIO_Port, butt2_GPIO_Port,
butt3_GPIO_Port };
uint16_t pin[N0_OF_BUTTONS] = { butt1_Pin, butt2_Pin, butt3_Pin };

void buttonReading() {
	for (unsigned int i = 0; i < N0_OF_BUTTONS; i++) {
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(port[i], pin[i]);
		if (debounceButtonBuffer1[i] == debounceButtonBuffer2[i])
			buttonBuffer[i] = debounceButtonBuffer1[i];
		if (buttonBuffer[i] == BUTTON_IS_PRESSED) {
//			if(!isTimerExpired(i + 4)) buttonBuffer[i] = BUTTON_IS_RELEASED;
//			if(isTimerExpired(i + 4)){
//				setTimer(i + 4, 50);
//			}
			// if a button is pressed , we start counting
			if (counterForButtonPress1s[i] < DURATION_FOR_AUTO_INCREASING) {
				counterForButtonPress1s[i]++;
				setTimer(3, 500);
			} else {
				// the flag is turned on when 1 second has passed
				// since the button is pressed .
				flagForButtonPress1s[i] = 1;
				// todo
			}
		} else {
			counterForButtonPress1s[i] = 0;
			flagForButtonPress1s[i] = 0;
		}
	}
}
int isButtonPressed(unsigned int index) {
	if (index >= N0_OF_BUTTONS)
		return 0;
	if (buttonBuffer[index] == BUTTON_IS_PRESSED
			&& counterForButtonPress1s[index] < 2) {
		buttonBuffer[index] = BUTTON_IS_RELEASED;
		return 1;
	}
	return 0;
//	return (buttonBuffer[index] == BUTTON_IS_PRESSED);
}
int isButtonPressed1s(unsigned int index) {
	if (index >= N0_OF_BUTTONS)
		return 0;
	if (isTimerExpired(3) && flagForButtonPress1s[index] == 1) {
		setTimer(3, 500);
		return 1;
	}
	return 0;
}

#endif /* SRC_BUTTON_C_ */
