/*
 * fsmAutomatic.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef INC_FSMAUTOMATIC_H_
#define INC_FSMAUTOMATIC_H_

#include "main.h"
#include "global.h"
#include "button.h"
#include "ledTraffic.h"
#include "softwareTimer.h"

#define RED 0
#define GREEN 1
#define AMBER 2
void initAutomatic();
void afterModify();
void automaticRun();
#endif /* INC_FSMAUTOMATIC_H_ */
