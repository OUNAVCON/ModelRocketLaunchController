#include <beeper.h>
#include "stm32f10x.h"

/*
 * PA8 / PWM output
 */
void initBeeper(void){
  // Enable GPIO Peripheral clock
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

  GPIO_InitTypeDef GPIO_InitStructure;

  // Configure pin in output push/pull mode
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void beeperOn(void){
	GPIO_SetBits(GPIOA, GPIO_Pin_8);
}

void beeperOff(void){
	GPIO_ResetBits(GPIOA, GPIO_Pin_8);
}
