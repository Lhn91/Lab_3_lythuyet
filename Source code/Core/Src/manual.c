#include "manual.h"

void manual_run() {
	switch (status) {
		case MAN_GREEN_RED:
			traffic_green_red();
			display7seg2_digit2(count_buffer_root[3]);
			display7seg2_digit(count_buffer_root[1]);
			if (isButtonPressed(1)) {
				setTimer(6000, 1);
				status = MAN_AMBER_RED;
			} else if(timer_flag[1] == 0 && isButtonPressed(2)){
					status = SETTING_GREEN;
			}else if (timer_flag[1] == 1) {
				setTimer(3000, 0);
				setTimer(1000,1);
				status = GREEN_RED;
			}
			break;

		case MAN_AMBER_RED:
			traffic_amber_red();
			display7seg2_digit(count_buffer_root[2]);
			display7seg2_digit2(count_buffer_root[3]);
			if (isButtonPressed(1)) {
				status = MAN_RED_GREEN;
				setTimer(6000, 1);
			} else if(timer_flag[1] == 0 && isButtonPressed(2)){
				status = SETTING_AMBER;
			}else if (timer_flag[1] == 1) {

				setTimer(2000, 0);
				setTimer(1000,1);
				status = GREEN_RED;
			}
			break;

		case MAN_RED_GREEN:
			traffic_red_green();
			display7seg2_digit(count_buffer_root[0]);
			display7seg2_digit2(count_buffer_root[4]);
			if (isButtonPressed(1)) {
				status = MAN_RED_AMBER;
				setTimer(6000, 1);
			}
			else if(timer_flag[1] == 0 && isButtonPressed(2)){
				status = SETTING_GREEN;
			} else if (timer_flag[1] == 1) {

				setTimer(3000, 0);
				setTimer(1000,1);
				status = RED_GREEN;
			}
			break;

		case MAN_RED_AMBER:
			traffic_red_amber();
			display7seg2_digit(count_buffer_root[0]);
			display7seg2_digit2(count_buffer_root[5]);
			if (isButtonPressed(1)) {
				status = MAN_GREEN_RED;
			}
			else if(timer_flag[1] == 0 && isButtonPressed(2)){
				status = SETTING_AMBER;
						}
			else if (timer_flag[1] == 1) {
				setTimer(2000, 0);
				setTimer(1000,1);
				status = RED_AMBER;
			}
			break;
	}
}
