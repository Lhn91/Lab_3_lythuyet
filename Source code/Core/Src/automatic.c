/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "automatic.h"
int status = INIT;
int count_buffer_root[6] = {4,2,1,4,2,1};
int count_buffer[6] = {4,2,1,4,2,1};
int array0[6] ={0,0,0,0,0,0};
void init_automatic(){

}
void automatic_run(){
	switch(status){
	case INIT:
		if(1){
		status = GREEN_RED;
		setTimer(1000,1);
		setTimer(3000,0);
		}
	break;

	case GREEN_RED:
		traffic_green_red();
		display7seg2_digit(count_buffer[1]);
		display7seg2_digit2(count_buffer[3]);
				if(timer_flag[1] == 1 ){
			//update display (7seg)
					count_buffer[1]--;
					count_buffer[3]--;
			setTimer(1000,1);
		}
		if(timer_flag[0] == 1){
			status = AMBER_RED;
			setTimer(1000,1);
			setTimer((count_buffer_root[2]+1)*1000,0);
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
			display7seg2_digit(count_buffer[2]);
			display7seg2_digit2(count_buffer[3]);
			if(timer_flag[1] == 1 ){
				//update display (7seg)
				count_buffer[2]--;
				count_buffer[3]--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_GREEN;
				setTimer(1000,1);
				setTimer((count_buffer_root[1]+1)*1000,0);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_AMBER_RED;
				setTimer(10000,1);
			}
			break;

	case RED_GREEN:

			traffic_red_green();
			display7seg2_digit(count_buffer[0]);
			display7seg2_digit2(count_buffer[4]);
			if(timer_flag[1] == 1){
				//update display (7seg)
				count_buffer[0]--;
				count_buffer[4]--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_AMBER;
				setTimer(1000,1);
				setTimer((count_buffer_root[2]+1)*1000,0);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_RED_GREEN;
				setTimer(10000,1);
			}
			break;

	case RED_AMBER:
			traffic_red_amber();
			display7seg2_digit(count_buffer[0]);
			display7seg2_digit2(count_buffer[5]);
			if(timer_flag[1] == 1 ){
				//update display (7seg)
				count_buffer[0]--;
				count_buffer[5]--;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = GREEN_RED;
				setTimer((count_buffer_root[1]+1)*1000,0);
				setTimer(1000,1);
			}
			if(isButtonPressed(1) == 1){
				status = MAN_RED_AMBER;
				setTimer(10000,1);
			}
			break;


	default:
		break;
	}

	if (count_buffer[0] < 0 ) {
		for(int i = 0; i < sizeof(count_buffer_root) /sizeof(count_buffer_root[0]); i++ ){
			count_buffer[i] = count_buffer_root[i];
		}
	}

}
