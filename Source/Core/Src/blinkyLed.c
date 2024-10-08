/*
 * blinkyLed.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#ifndef SRC_BLINKYLED_C_
#define SRC_BLINKYLED_C_

#include "blinkyLed.h"
void testLed(){
	HAL_GPIO_TogglePin ( blinkyLed_GPIO_Port , blinkyLed_Pin );
}

#endif /* SRC_BLINKYLED_C_ */
