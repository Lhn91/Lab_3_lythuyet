/*
 * button.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "button.h"
#include "main.h"
int button_flag = 0;
int keyReg0 = NORMAL_STATE;
int keyReg1 = NORMAL_STATE;
int keyReg2 = NORMAL_STATE;
int keyReg3 = NORMAL_STATE;
int TimerForKeyPressed = 200; //nhan de 2s moi xu li
int isButtonPressed(){
	if(button_flag == 1){
		button_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess(){
	button_flag = 1;
}
void getKeyInput(){
 keyReg0 = keyReg1;
 keyReg1 = keyReg2;
 keyReg2 = HAL_GPIO_ReadPin(button_GPIO_Port, button_Pin);
 if((keyReg0 == keyReg1)&&(keyReg1 == keyReg2)){
	 if(keyReg3 != keyReg2){
		 keyReg3 = keyReg2;
		 if(keyReg2 == PRESSED_STATE){
			 //TODO
			 subKeyProcess();
			 TimerForKeyPressed = 200;
		 }
	 }else{
		 TimerForKeyPressed--;
		 if(TimerForKeyPressed == 0){
			 //TODO
			if(keyReg2 == PRESSED_STATE){
			 subKeyProcess();
			}
			 TimerForKeyPressed = 200;
		 }
	 }
 }
}
