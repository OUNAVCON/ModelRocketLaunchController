#include "stm32f10x.h"
typedef struct

{

  uint32_t SYSCLK_Frequency;

  uint32_t HCLK_Frequency;

  uint32_t PCLK1_Frequency;

  uint32_t PCLK2_Frequency;

  uint32_t ADCCLK_Frequency;

}RCC_ClocksTypeDef;

void RCC_DeInit(void);

void RCC_HSEConfig(uint32_t RCC_HSE);

ErrorStatus RCC_WaitForHSEStartUp(void);

void RCC_AdjustHSICalibrationValue(uint8_t HSICalibrationValue);

void RCC_HSICmd(FunctionalState NewState);

void RCC_PLLConfig(uint32_t RCC_PLLSource, uint32_t RCC_PLLMul);

void RCC_PLLCmd(FunctionalState NewState);

void RCC_SYSCLKConfig(uint32_t RCC_SYSCLKSource);

uint8_t RCC_GetSYSCLKSource(void);

void RCC_HCLKConfig(uint32_t RCC_SYSCLK);

void RCC_PCLK1Config(uint32_t RCC_HCLK);

void RCC_PCLK2Config(uint32_t RCC_HCLK);

void RCC_ITConfig(uint8_t RCC_IT, FunctionalState NewState);





 void RCC_USBCLKConfig(uint32_t RCC_USBCLKSource);









void RCC_ADCCLKConfig(uint32_t RCC_PCLK2);













void RCC_LSEConfig(uint8_t RCC_LSE);

void RCC_LSICmd(FunctionalState NewState);

void RCC_RTCCLKConfig(uint32_t RCC_RTCCLKSource);

void RCC_RTCCLKCmd(FunctionalState NewState);

void RCC_GetClocksFreq(RCC_ClocksTypeDef* RCC_Clocks);

void RCC_AHBPeriphClockCmd(uint32_t RCC_AHBPeriph, FunctionalState NewState);

void RCC_APB2PeriphClockCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);

void RCC_APB1PeriphClockCmd(uint32_t RCC_APB1Periph, FunctionalState NewState);











void RCC_APB2PeriphResetCmd(uint32_t RCC_APB2Periph, FunctionalState NewState);

void RCC_APB1PeriphResetCmd(uint32_t RCC_APB1Periph, FunctionalState NewState);

void RCC_BackupResetCmd(FunctionalState NewState);

void RCC_ClockSecuritySystemCmd(FunctionalState NewState);

void RCC_MCOConfig(uint8_t RCC_MCO);

FlagStatus RCC_GetFlagStatus(uint8_t RCC_FLAG);

void RCC_ClearFlag(void);

ITStatus RCC_GetITStatus(uint8_t RCC_IT);

void RCC_ClearITPendingBit(uint8_t RCC_IT);
