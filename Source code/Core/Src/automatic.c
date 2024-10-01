/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "automatic.h"
int status = INIT;
int count_green = 2;
int count_red = 4;
int count_amber = 1;
void init_automatic(){

}
void automatic_run(){
	switch(status){
	case INIT:
		if(1){
		status = GREEN_RED;
		setTimer(5000,0);
		timer_flag[1] = 1;
		}
	break;

	case GREEN_RED:

		traffic_green_red();
		if(timer_flag[1] == 1){
			//update display (7seg)
			display7seg(count_green);
			display7seg2(count_red);
			count_green--;
			count_red--;
			setTimer(1000,1);
		}
		if(timer_flag[0] == 1){
			count_green = 2;
			count_red = 4;
			status = AMBER_RED;
			setTimer(2000,0);
		}
		if(isButtonPressed() == 1){
			status = MAN_GREEN_RED;
			display7seg(2);
			display7seg2(4);
			setTimer(10000,1);
		}
		break;

	case AMBER_RED:

			traffic_amber_red();
			if(timer_flag[1] == 1){
				//update display (7seg)
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = AMBER_RED;
				setTimer(2000,0);
			}
			if(isButtonPressed() == 1){
				status = MAN_GREEN_RED;
				setTimer(10000,1);
			}
			break;



	default:
		break;

	}
}
