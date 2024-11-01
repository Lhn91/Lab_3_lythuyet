/*
 * setting.c
 *
 *  Created on: Nov 1, 2024
 *      Author: 84859
 */
#include "setting.h"
void setting_run(){
	switch(status){
	case SETTING_GREEN:
		display7seg2_digit2(count_buffer_root[1]);
		display7seg2_digit(count_buffer_root[4]);
		traffic_green_green();
		if(isButtonPressed(1)){
			if((count_buffer_root[1] + count_buffer_root[2])<100 ){
				count_buffer_root[1] +=1;
				count_buffer_root[4] +=1;
			}else if(count_buffer_root[1] == 98){
				count_buffer_root[1] = 1;
				count_buffer_root[4] = 1;
			}
		}

		if(isButtonPressed(2)){
			status = SETTING_AMBER;
		}
		if(isButtonPressed(3)){
			if(count_buffer_root[1] > 1 && count_buffer_root[4] > 1){
				count_buffer_root[1] -=1;
				count_buffer_root[4] -=1;
			}
			else {
			count_buffer_root[1] =1;
			count_buffer_root[4] = 1;}
		}
		if(isButtonPressed(4)){
			count_buffer_root[0] = count_buffer_root[3] = count_buffer_root[1] + count_buffer_root[2] + 1;
			for(int i = 0; i < sizeof(count_buffer_root) /sizeof(count_buffer_root[0]); i++ ){
						count_buffer[i] = count_buffer_root[i];
					}
			status = GREEN_RED;
			setTimer(1000,1);
			setTimer((count_buffer_root[1]+1)*1000,0);
		}
		break;

	case SETTING_AMBER:
		traffic_amber_amber();
		display7seg2_digit2(count_buffer_root[2]);
				display7seg2_digit(count_buffer_root[5]);
		if(isButtonPressed(1)){
					if((count_buffer_root[1] + count_buffer_root[2])<100 ){
						count_buffer_root[2] +=1;
						count_buffer_root[5] +=1;
					}else if(count_buffer_root[1] == 98){
						count_buffer_root[2] = 1;
						count_buffer_root[5] = 1;
					}
				}

				if(isButtonPressed(2)){
					status = SETTING_GREEN;
				}
				if(isButtonPressed(3)){
					if(count_buffer_root[2] > 1 && count_buffer_root[5] > 1){
						count_buffer_root[2] -=1;
						count_buffer_root[5] -=1;
					}
					else {
					count_buffer_root[2] = 1;
					count_buffer_root[5] = 1;}
				}
				if(isButtonPressed(4)){
					count_buffer_root[0] = count_buffer_root[3] = count_buffer_root[1] + count_buffer_root[2]+1;
					for(int i = 0; i < sizeof(count_buffer_root) /sizeof(count_buffer_root[0]); i++ ){
								count_buffer[i] = count_buffer_root[i];
							}
					status = GREEN_RED;
					setTimer(1000,1);
					setTimer((count_buffer_root[1]+1)*1000,0);//chinh
				}
				break;
	}

}


