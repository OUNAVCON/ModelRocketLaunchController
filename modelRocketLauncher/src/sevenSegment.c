#include <sevenSegment.h>
#include "stm32f10x.h"

/*
 * Connections
 * char_LED	PA
 * 		g	0
 * 		f	1
 * 		a	2
 * 		b	3
 * 		c	4
 * 		d	5
 * 		e	6
 */

void initSevenSegment(){
	 // Enable GPIO Peripheral clock
	int index = 0;
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	  GPIO_InitTypeDef GPIO_InitStructure;

	  // Configure pin in output push/pull mode

	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	  for(index = 0; index < 7; index++){
		  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
		  GPIO_Init(GPIOA, &GPIO_InitStructure);
	  }
}


void updateSevenSegment(unsigned int value){
	uint16_t character = 0;
	uint16_t currentPortValue = 0;

	switch(value){
		case 0:
			character = 0x7e;
			break;
		case 1:
			character = 0x18;
			break;
		case 2:
			character = 0x6d;
			break;
		case 3:
			character = 0x3d;
			break;
		case 4:
			character = 0x1b;
			break;
		case 5:
			character = 0x37;
			break;
		case 6:
			character = 0x77;
			break;
		case 7:
			character = 0x1c;
			break;
		case 8:
			character = 0x7f;
			break;
		case 9:
			character = 0x1f;
			break;
		default:
			character = 0x01; //-
			break;
	}

	currentPortValue = GPIO_ReadOutputData(GPIOA);
	GPIO_Write(GPIOA, (currentPortValue & 0x3f) | character);
}


