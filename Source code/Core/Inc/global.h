/*
 * global.h
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 1
#define GREEN_RED 2
#define AMBER_RED 3
#define RED_GREEN 4
#define RED_AMBER 5


#define MAN_GREEN_RED 12
#define MAN_AMBER_RED 13
#define MAN_RED_GREEN 14
#define MAN_RED_AMBER 15

#define SETTING_GREEN 22
#define SETTING_AMBER 23


#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "seven_seg.h"
#include "automatic.h"
#include "manual.h"
#include "setting.h"
extern int status;
extern int count_buffer[6];
extern int count_buffer_root[6];
#endif /* INC_GLOBAL_H_ */
