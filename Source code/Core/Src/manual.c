#include "manual.h"

void manual_run() {
	switch (status) {
		case MAN_GREEN_RED:
			traffic_green_red();
			if (isButtonPressed()) {
				setTimer(6000, 1);
				status = MAN_AMBER_RED;
			} else if (timer_flag[1] == 1) {
				i = 0;
				j = 0;
				setTimer(3000, 0);
				status = GREEN_RED;
			}
			break;

		case MAN_AMBER_RED:
			traffic_amber_red();
			if (isButtonPressed()) {
				status = MAN_RED_GREEN;
				setTimer(6000, 1);
			} else if (timer_flag[1] == 1) {
				i = 3;
				j = 3;
				setTimer(2000, 0);
				status = GREEN_RED;
			}
			break;

		case MAN_RED_GREEN:
			traffic_red_green();
			if (isButtonPressed()) {
				status = MAN_RED_AMBER;
				setTimer(6000, 1);
			} else if (timer_flag[1] == 1) {
				i = 5;
				j = 5;
				setTimer(3000, 0);
				status = RED_GREEN;
			}
			break;

		case MAN_RED_AMBER:
			traffic_red_amber();
			if (isButtonPressed()) {
				status = MAN_GREEN_RED;
			} else if (timer_flag[1] == 1) {
				i = 8;
				j = 8;
				setTimer(2000, 0);
				status = RED_AMBER;
			}
			break;
	}
}
