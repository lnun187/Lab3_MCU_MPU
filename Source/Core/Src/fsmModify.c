/*
 * fsmModify.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#include "fsmModify.h"

void modifyGreen(){
	if(isTimerExpired(0)){
		greenBlinky();
		setTimer(0, 500);
	}
	displayTime(4, timeTemp);
	if(isButtonPressed1s(1)) {
		timeTemp++;
		setTimer(3, 500);
	}
	if(isButtonPressed(1)) timeTemp++;
	if(isButtonPressed(2)) timeGreen = timeTemp;
}
void modifyAmber(){
	if(isTimerExpired(0)){
		amberBlinky();
		setTimer(0, 500);
	}
	displayTime(3, timeTemp);
	if(isButtonPressed1s(1)) {
		timeTemp++;
		setTimer(3, 500);
	}
	if(isButtonPressed(1)) timeTemp++;
	if(isButtonPressed(2)) timeAmber = timeTemp;
}
void modifyRed(){
	if(isTimerExpired(0)){
		redBlinky();
		setTimer(0, 500);
	}
	displayTime(2, timeTemp);
	if(isButtonPressed1s(1)) {
		timeTemp++;
		setTimer(3, 500);
	}
	if(isButtonPressed(1)) timeTemp++;
	if(isButtonPressed(2)) timeRed = timeTemp;
}

