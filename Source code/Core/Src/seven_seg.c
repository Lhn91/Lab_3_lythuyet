/*
 * sevn_seg.c
 *
 *  Created on: Sep 24, 2024
 *      Author: 84859
 */
#include "seven_seg.h"
void display7seg(int num){
	switch(num){
		 case 0:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_SET);

			   break;

		 case 1:
			 HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);


			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_SET);

			  break;


		 case 2:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					  		   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
					  		 HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);



					  		  HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
					  		  HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
					  		  break;

		 case 3:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
					   break;


		 case 4:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);

					   break;


		 case 5:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
					   break;


		 case 6:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
					   break;


		 case 7:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_SET);
					   break;

		 case 8:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
					   break;

		 case 9:
			 HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(S7_GPIO_Port, S7_Pin, GPIO_PIN_RESET);
					   break;


		 }

	 }


void display7seg2(int num){
	switch(num){
			 case 0:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_SET);

				   break;

			 case 1:
				 HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);


				HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_SET);

				  break;


			 case 2:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						  		   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
						  		 HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);



						  		  HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_SET);
						  		  HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
						  		  break;

			 case 3:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);
						   break;


			 case 4:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);

						   break;


			 case 5:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);
						   break;


			 case 6:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);
						   break;


			 case 7:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_SET);
						   break;

			 case 8:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);
						   break;

			 case 9:
				 HAL_GPIO_WritePin(S8_GPIO_Port, S8_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S9_GPIO_Port, S9_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S10_GPIO_Port, S10_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S11_GPIO_Port, S11_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S12_GPIO_Port, S12_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(S13_GPIO_Port, S13_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(S14_GPIO_Port, S14_Pin, GPIO_PIN_RESET);
						   break;


			 }
}
