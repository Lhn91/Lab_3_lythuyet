/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "automatic.h"
int status = INIT;
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
			setTimer(1000,1);
		}
		if(timer_flag[0] == 1){
			status = AMBER_RED;
			setTimer(2000,0);
		}
		if(button1_flag == 1){
			status = MAN_GREEN_RED;
			button1_flag = 0;
			setTimer(10000,1);
		}
		break;



	default:
		break;

	}
}
