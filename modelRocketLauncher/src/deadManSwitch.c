#include <deadManSwitch.h>
#include "stm32f10x.h"


/*
 * PC14 input
 */

void initDeadManSwitch(){
	GPIO_InitTypeDef GPIO_InitStructure;
	// Enable GPIO Peripheral clock
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

	// Configure pin in output push/pull mode
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
}

deadManSwtichState_t readCurrentDeadManSwitchState(){
	deadManSwtichState_t result = DEADMAN_SWITCH_STATE_INACTIVE;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_0)){
		result = DEADMAN_SWITCH_STATE_ACTIVE;
	}
	return result;
}
