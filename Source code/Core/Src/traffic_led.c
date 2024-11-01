/*
 * traffic_led.c
 *
 *  Created on: Sep 24, 2024
 *      Author: 84859
 */
#include "traffic_led.h"
void traffic_green_red(){
 HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET); //ON
 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);

 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, SET); //ON
 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, RESET);
}
void traffic_amber_red(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET); //ON

	 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, SET); //ON
	 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, RESET);

}
void traffic_red_green(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET); //ON
	 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);

	 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, RESET);
	 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET); //ON
	 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, RESET);

}
void traffic_red_amber(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET); //ON
	 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
	 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);

	 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, RESET);
	 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
	 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, SET);
}

void traffic_amber_amber(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
		 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
		 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET); //ON

	 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, RESET);
		 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, SET);
}

void traffic_green_green(){
	HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
	 HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET); //ON
	 HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);


	 HAL_GPIO_WritePin(R_GPIO_Port, R_Pin, RESET);
	 HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET); //ON
	 HAL_GPIO_WritePin(Y_GPIO_Port, Y_Pin, RESET);
}


