#include "manual.h"

void manual_run() {
	switch (status) {
		case MAN_GREEN_RED:
			traffic_green_red();
			count_red2 = 4;
			count_green1 = 2;
			display7seg2(count_red2);
			display7seg(count_green1);
			if (isButtonPressed(1)) {
				setTimer(6000, 1);
				status = MAN_AMBER_RED;
			} else if (timer_flag[1] == 1) {
				setTimer(3000, 0);
				status = GREEN_RED;
			}
			break;

		case MAN_AMBER_RED:
			traffic_amber_red();
			count_amber1 = 1;
			count_red2 = 1;
			display7seg(count_amber1);
			display7seg2(count_red2);
			if (isButtonPressed(1)) {
				status = MAN_RED_GREEN;
				setTimer(6000, 1);
			} else if (timer_flag[1] == 1) {

				setTimer(2000, 0);
				status = GREEN_RED;
			}
			break;

		case MAN_RED_GREEN:
			traffic_red_green();
			count_red1 = 4;
			count_green2 = 2;
			display7seg(count_red1);
			display7seg2(count_green2);
			if (isButtonPressed(1)) {
				status = MAN_RED_AMBER;
				setTimer(6000, 1);
			} else if (timer_flag[1] == 1) {

				setTimer(3000, 0);
				status = RED_GREEN;
			}
			break;

		case MAN_RED_AMBER:
			traffic_red_amber();
			count_red1 = 1;
			count_amber2 = 1;
			display7seg(count_red1);
			display7seg2(count_amber2);
			if (isButtonPressed(1)) {
				status = MAN_GREEN_RED;
			} else if (timer_flag[1] == 1) {
				setTimer(2000, 0);
				status = RED_AMBER;
			}
			break;
	}
}
