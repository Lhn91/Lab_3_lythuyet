/*
 * button.c
 *
 *  Created on: Sep 23, 2024
 *      Author: 84859
 */
#include "button.h"
#include "main.h"
int button_flag[4] = {0,0,0,0};
int keyReg0[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg1[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg2[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int keyReg3[4] = {NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int TimerForKeyPressed = 100; //nhan de 2s moi xu li

int isButtonPressed(int i){
		if(button_flag[i-1] == 1){
			button_flag[i-1] = 0;
			return 1;
		}
		return 0;
}
void subKeyProcess(int i){
	button_flag[i] = 1;
}
void getKeyInput(){
	for(int i = 0; i<4;i++){
 keyReg0[i] = keyReg1[i];
 keyReg1[i] = keyReg2[i];
 switch (i){
	 case 0: keyReg2[0] = HAL_GPIO_ReadPin(button_GPIO_Port, button_Pin);
		 break;
	 case 1: keyReg2[1] = HAL_GPIO_ReadPin(b1_GPIO_Port,b1_Pin);
		 break;
	 case 2: keyReg2[2] = HAL_GPIO_ReadPin(b2_GPIO_Port, b2_Pin);
		 break;
	 case 3: keyReg2[3] = HAL_GPIO_ReadPin(b3_GPIO_Port, b3_Pin);
 }
 if((keyReg0[i] == keyReg1[i])&&(keyReg1[i] == keyReg2[i])){
	 if(keyReg3[i] != keyReg2[i]){
		 keyReg3[i] = keyReg2[i];
		 if(keyReg2[i] == PRESSED_STATE){
			 //TODO
			 subKeyProcess(i);
			 TimerForKeyPressed = 50;
		 }
	 }else{
		 TimerForKeyPressed--;
		 if(TimerForKeyPressed == 0){
			 //TODO
			if(keyReg2[i] == PRESSED_STATE){
			 subKeyProcess(i);
			}
			 TimerForKeyPressed = 50;
		 }
	 }
 }
	}
}
