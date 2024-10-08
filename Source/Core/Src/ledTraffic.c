/*
 * ledTraffic.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef SRC_LEDTRAFFIC_C_
#define SRC_LEDTRAFFIC_C_

#include "ledTraffic.h"

void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	default:
		break;
	}
}
int LED = 0;
void displayTime(int trafficA, int trafficB){
	switch(LED){
	case 0:
		display7SEG(trafficA / 10);
		HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , GPIO_PIN_SET );
		if(isTimerExpired(2)){
			LED = 1;
			setTimer(2, TIMEDISPLAY);
		}
		break;
	case 1:
		display7SEG(trafficA % 10);
		HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , GPIO_PIN_SET );
		if(isTimerExpired(2)){
			LED = 2;
			setTimer(2, TIMEDISPLAY);
		}
		break;
	case 2:
		display7SEG(trafficB / 10);
		HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , GPIO_PIN_SET );
		if(isTimerExpired(2)){
			LED = 3;
			setTimer(2, TIMEDISPLAY);
		}

		break;
	case 3:
		display7SEG(trafficB % 10);
		HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , GPIO_PIN_RESET );
		if(isTimerExpired(2)){
			LED = 0;
			setTimer(2, TIMEDISPLAY);
		}

		break;
	default:
		display7SEG(trafficA / 10);
		HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( EN4_GPIO_Port , EN4_Pin , GPIO_PIN_SET );
		if(isTimerExpired(2)){
			LED = 0;
			setTimer(2, TIMEDISPLAY);
		}

		break;
	}
}
void greenA(){
	HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_RESET );

}
void amberA(){
	HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET );
}
void redA(){
	HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET );

}
void greenB(){
	HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_RESET );
}
void amberB(){
	HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET );
}
void redB(){
	HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET );
}
void greenBlinky(){
	HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET );
	HAL_GPIO_TogglePin ( LED3_GPIO_Port , LED3_Pin);
	HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET );
	HAL_GPIO_TogglePin ( LED6_GPIO_Port , LED6_Pin );
}
void amberBlinky(){
	HAL_GPIO_WritePin ( LED1_GPIO_Port , LED1_Pin , GPIO_PIN_SET );
	HAL_GPIO_TogglePin ( LED2_GPIO_Port , LED2_Pin );
	HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED4_GPIO_Port , LED4_Pin , GPIO_PIN_SET );
	HAL_GPIO_TogglePin ( LED5_GPIO_Port , LED5_Pin );
	HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET );
}
void redBlinky(){
	HAL_GPIO_TogglePin ( LED1_GPIO_Port , LED1_Pin );
	HAL_GPIO_WritePin ( LED2_GPIO_Port , LED2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED3_GPIO_Port , LED3_Pin , GPIO_PIN_SET );
	HAL_GPIO_TogglePin ( LED4_GPIO_Port , LED4_Pin );
	HAL_GPIO_WritePin ( LED5_GPIO_Port , LED5_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( LED6_GPIO_Port , LED6_Pin , GPIO_PIN_SET );
}
#endif /* SRC_LEDTRAFFIC_C_ */
