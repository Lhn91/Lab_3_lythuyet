/*
 * manual.c
 *
 *  Created on: Sep 24, 2024
 *      Author: 84859
 */
#include "manual.h"
void manual_run(){
	switch(status){
		case MAN_GREEN_RED:
			traffic_green_red();
			if(isButtonPressed() == 1){
					status = MAN_RED_AMBER;
					setTimer(10000,1);
			}

			if(isButtonPressed() == 0 && timer_flag[1] == 1){
				status = GREEN_RED;
				count_green = 2;
				count_red = 4;
				setTimer(5000,0);
			}

	}

}

