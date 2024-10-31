/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "automatic.h"
int status = INIT;
int count_red1 = 4;
int count_green1 = 2;
int count_amber1 = 1;
int count_red2 = 4;
int count_green2 = 2;
int count_amber2 =1;
void init_automatic(){

}
void automatic_run(){
	switch(status){
	case INIT:
		if(1){
		status = GREEN_RED;
		setTimer(3000,0);
		timer_flag[1] = 1;
		}
	break;

	case GREEN_RED:
		traffic_green_red();
		if(timer_flag[1] == 1 && timer_flag[0] == 0){
			//update display (7seg)
			display7seg(count_green1);
			display7seg2(count_red2);
			count_green1--;
			count_red2--;
			setTimer(1000,1);
		}
		if(timer_flag[0] == 1){
			status = AMBER_RED;
			timer_flag[1] = 1;
			setTimer(2000,0);
		}
		if(isButtonPressed(1) == 1){
			status = MAN_GREEN_RED;
			display7seg(2);
			display7seg2(4);
			setTimer(10000,1);
		}
		break;

	case AMBER_RED:
			traffic_amber_red();
			if(timer_flag[1] == 1 && timer_flag[0] == 0){
				//update display (7seg)
				display7seg(count_amber1);
			    display7seg2(count_red2);
			    count_amber1--;
			    count_red2--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_GREEN;
				timer_flag[1] = 1;
				setTimer(3000,0);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_AMBER_RED;
				setTimer(10000,1);
			}
			break;

	case RED_GREEN:

			traffic_red_green();
			if(timer_flag[1] == 1&& timer_flag[0] == 0){
				//update display (7seg)
				display7seg(count_red1);
				display7seg2(count_green2);
				count_red1--;
				count_green2--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_AMBER;
				timer_flag[1] = 1;
				setTimer(2000,0);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_RED_GREEN;
				setTimer(10000,1);
			}
			break;

	case RED_AMBER:
			traffic_red_amber();
			if(timer_flag[1] == 1&& timer_flag[0] == 0){
				//update display (7seg)
				display7seg(count_red1);
				display7seg2(count_amber2);
				count_red1--;
				count_amber2--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = GREEN_RED;
				timer_flag[1] = 1;
				setTimer(3000,0);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_RED_AMBER;
				setTimer(10000,1);
			}
			break;


	default:
		break;
	}

	if (count_red1 < 0 && count_green1 < 0 && count_amber1 < 0 &&
	    count_red2 < 0 && count_green2 < 0 && count_amber2 < 0) {
	    count_red1 = 4;
	    count_green1 = 2;
	    count_amber1 = 1;
	    count_red2 = 4;
	    count_green2 = 2;
	    count_amber2 = 1;
	}

}
