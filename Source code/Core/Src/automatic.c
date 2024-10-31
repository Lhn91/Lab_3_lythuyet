/*
 * automatic.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "automatic.h"
int status = INIT;
int arr1[10] = {4,3,2,1,0,2,1,0,1,0};
int arr2[10] = {2,1,0,1,0,4,3,2,1,0};
int i = 0;
int j = 0;
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
		if(timer_flag[1] == 1){
			//update display (7seg)
			display7seg(arr1[i]);
			display7seg2(arr2[j]);
			i++;
			j++;
			setTimer(1000,1);
		}
		if(timer_flag[0] == 1){
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
				display7seg(arr1[i]);
			    display7seg2(arr2[j]);
				i++;
				j++;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_GREEN;
				setTimer(3000,0);
			}
			if(isButtonPressed() == 1){
				status = MAN_AMBER_RED;
				setTimer(10000,1);
			}
			break;

	case RED_GREEN:

			traffic_red_green();
			if(timer_flag[1] == 1){
				//update display (7seg)
				display7seg(arr1[i]);
				display7seg2(arr2[j]);
			    i++;
				j++;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = RED_AMBER;
				setTimer(2000,0);
			}
			if(isButtonPressed() == 1){
				status = MAN_RED_GREEN;
				setTimer(10000,1);
			}
			break;

	case RED_AMBER:
			traffic_red_amber();
			if(timer_flag[1] == 1){
				//update display (7seg)
				display7seg(arr1[i]);
							display7seg2(arr2[j]);
							i++;
							j++;
				setTimer(1000,1);
			}
			if(timer_flag[0] == 1){
				status = GREEN_RED;
				setTimer(3000,0);
			}
			if(isButtonPressed() == 1){
				status = MAN_RED_AMBER;
				setTimer(10000,1);
			}
			break;


	default:
		break;
	}

	if( i == 10 || j == 10){
		i=0;
		j=0;
	}
}
