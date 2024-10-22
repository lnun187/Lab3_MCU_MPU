/*
 * ledTraffic.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef INC_LEDTRAFFIC_H_
#define INC_LEDTRAFFIC_H_

#include "main.h"
#define TIMEDISPLAY 250
void display7SEG(int num);
void displayTime(int trafficA, int trafficB);
void greenA();
void amberA();
void redA();
void greenB();
void amberB();
void redB();
void greenBlinky();
void amberBlinky();
void redBlinky();
#endif /* INC_LEDTRAFFIC_H_ */
