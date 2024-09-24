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
			if(button1_flag == 1){
					status = MAN_GREEN_RED;
					button1_flag = 0;
					setTimer(10000,1);
			}
	}

}

