#include <beeper.h>
#include "stm32f10x.h"

/*
 * PA8 / PWM output
 */
void initBeeper(void){
  GPIO_InitTypeDef GPIO_InitStructure;
  // Enable GPIO Peripheral clock
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

  // Configure pin in output push/pull mode
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
}

void beeperOn(void){
	GPIO_SetBits(GPIOB, GPIO_Pin_1);
}

void beeperOff(void){
	GPIO_ResetBits(GPIOB, GPIO_Pin_1);
}
