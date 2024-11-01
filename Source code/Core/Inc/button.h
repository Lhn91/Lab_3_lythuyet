/*
 * button.h
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"
#define NORMAL_STATE GPIO_PIN_SET //1
#define PRESSED_STATE GPIO_PIN_RESET //0
extern int button_flag[4];
void getKeyInput();
int isButtonPressed(int i);

#endif /* INC_BUTTON_H_ */
