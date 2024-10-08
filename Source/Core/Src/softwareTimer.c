/*
 * softwareTimer.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "softwareTimer.h"
int timer_flag[10];
int timer_counter[10];

void setTimer(int index, int counter){
	timer_flag[index] = 0;
	timer_counter[index] = counter / TIMER_CYCLE;
}

void timeRun(){
	for(int i = 0; i < 5; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
		}
		if(timer_counter[i] <= 0){
			timer_flag[i] = 1;
		}
	}
}

int isTimerExpired(int index){
	if(timer_flag[index] == 1){
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}
