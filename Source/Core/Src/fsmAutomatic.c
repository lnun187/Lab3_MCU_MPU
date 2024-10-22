/*
 * fsmAutomatic.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#include "fsmAutomatic.h"

int stateA;
int stateB;
int countA;
int countB;
void initAutomatic() {
	timeGreen = 3;
	timeAmber = 2;
	timeRed = 5;
	stateA = RED;
	countA = timeRed;
	stateB = GREEN;
	countB = timeGreen;
	setTimer(0, 1000);
	setTimer(1, 1000);
}
void afterModify(){
	stateA = RED;
	countA = timeRed;
	stateB = GREEN;
	countB = timeGreen;
	setTimer(0, 1000);
	setTimer(1, 1000);
}
void automaticRun() {
	displayTime(countA, countB);
	switch (stateA) {
		case GREEN:
				greenA();
				if(isTimerExpired(0)){
					setTimer(0, 1000);
					countA--;
				}
				if(countA <= 0){
					countA = timeAmber;
					stateA = AMBER;
				}
			break;
		case AMBER:
				amberA();
				if(isTimerExpired(0)){
					setTimer(0, 1000);
					countA--;
				}
				if(countA <= 0){
					countA = timeRed;
					stateA = RED;
				}
			break;
		case RED:
				redA();
				if(isTimerExpired(0)){
					setTimer(0, 1000);
					countA--;
				}
				if(countA <= 0){
					countA = timeGreen;
					stateA = GREEN;
				}
			break;
		default:
			stateA = RED;
			countA = timeRed;
			setTimer(0, 1000);
			break;
	}
	switch (stateB) {
		case GREEN:
				greenB();
				if(isTimerExpired(1)){
					setTimer(1, 1000);
					countB--;
				}
				if(countB <= 0){
					countB = timeAmber;
					stateB = AMBER;
				}
			break;
		case AMBER:
				amberB();
				if(isTimerExpired(1)){
					setTimer(1, 1000);
					countB--;
				}
				if(countB <= 0){
					countB = timeRed;
					stateB = RED;
				}
			break;
		case RED:
				redB();
				if(isTimerExpired(1)){
					setTimer(1, 1000);
					countB--;
				}
				if(countB <= 0){
					countB = timeGreen;
					stateB = GREEN;
				}
			break;
		default:
			stateB = RED;
			countB = timeRed;
			setTimer(1, 1000);
			break;
	}
}
