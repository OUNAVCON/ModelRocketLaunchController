#include <sevenSegment.h>
#include "stm32f10x.h"
/*
 * PA0-PA6
 * PA0 - a
 * PA1 - b
 * PA2 - c
 * PA3 - d
 * PA4 - e
 * PA5 - f
 * PA6 - g
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
		  GPIO_Init(GPIOA_BASE, &GPIO_InitStructure);
	  }
}


void updateSevenSegment(unsigned int value){
	unsigned char character = 0;

	switch(value){
		case 0:
			character = 0b00000000;
			break;
		case 1:
			character = 0b00000000;
			break;
		case 2:
			character = 0b00000000;
			break;
		case 3:
			character = 0b00000000;
			break;
		case 4:
			character = 0b00000000;
			break;
		case 5:
			character = 0b00000000;
			break;
		case 6:
			character = 0b00000000;
			break;
		case 7:
			character = 0b00000000;
			break;
		case 8:
			character = 0b00000000;
			break;
		case 9:
			character = 0b00000000;
			break;
		default:
			character = 0b00000000;
			break;
	}

	GPIO_Write(GPIOA_BASE, character);
}


