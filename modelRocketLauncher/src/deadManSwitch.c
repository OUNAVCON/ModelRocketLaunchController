#include <deadManSwitch.h>
#include "stm32f10x.h"


/*
 * PC14 input
 */

void initDeadManSwitch(){
	 // Enable GPIO Peripheral clock
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

	  GPIO_InitTypeDef GPIO_InitStructure;

	  // Configure pin in output push/pull mode
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	  GPIO_Init(GPIOC, &GPIO_InitStructure);
}

deadManSwtichState_t readCurrentDeadManSwitchState(){
	deadManSwtichState_t result = DEADMAN_SWITCH_STATE_INACTIVE;
	if(GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_14)){
		result = DEADMAN_SWITCH_STATE_ACTIVE;
	}
	return result;
}
