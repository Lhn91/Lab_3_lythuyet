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
		setTimer1(5000);
		timer2_flag = 1;
		}
	break;

	case GREEN_RED:

		traffic_green_red();
		if(timer2_flag == 1){
			//update display (7seg)
			setTimer2(1000);
		}
		if(timer1_flag == 1){
			status = AMBER_RED;
			setTimer1(2000);
		}
		if(button1_flag == 1){
			status = MAN_GREEN_RED;
			button1_flag = 0;
			setTimer2(10000);
		}
		break;



	default:
		break;

	}
}
