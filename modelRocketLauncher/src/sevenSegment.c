#include <sevenSegment.h>
#include "stm32f10x.h"

void initSevenSegment(){
	GPIO_InitTypeDef GPIO_InitStructure;
	// Enable GPIO Peripheral clock
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Pin  = 0x0F;
	GPIO_Write(GPIOA, 0x0F);
	GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void updateSevenSegment(unsigned int value){
	uint16_t currentPortValue = 0;

	currentPortValue = GPIO_ReadOutputData(GPIOA);
	currentPortValue &= 0xF0;
	currentPortValue |= (uint8_t)value;
	GPIO_Write(GPIOA, currentPortValue);
}


