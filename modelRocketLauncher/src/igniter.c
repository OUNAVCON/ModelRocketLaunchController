#include <igniter.h>
#include "stm32f10x.h"
/*
 * PC15 output
 * PB1 ADC - current out relay.
 *
 * setIgniterRelay(IgniterRelay_t state);
 *
 * checkCurrentState();
 */

void initIgniter(void){
	 // Enable GPIO Peripheral clock
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

	  GPIO_InitTypeDef GPIO_InitStructure;

	  // Configure pin in output push/pull mode
	  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	  GPIO_Init(GPIOC, &GPIO_InitStructure);
}
