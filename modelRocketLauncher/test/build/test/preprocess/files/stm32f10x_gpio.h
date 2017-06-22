#include "stm32f10x.h"
typedef enum

{

  GPIO_Speed_10MHz = 1,

  GPIO_Speed_2MHz,

  GPIO_Speed_50MHz

}GPIOSpeed_TypeDef;















typedef enum

{ GPIO_Mode_AIN = 0x0,

  GPIO_Mode_IN_FLOATING = 0x04,

  GPIO_Mode_IPD = 0x28,

  GPIO_Mode_IPU = 0x48,

  GPIO_Mode_Out_OD = 0x14,

  GPIO_Mode_Out_PP = 0x10,

  GPIO_Mode_AF_OD = 0x1C,

  GPIO_Mode_AF_PP = 0x18

}GPIOMode_TypeDef;

typedef struct

{

  uint16_t GPIO_Pin;





  GPIOSpeed_TypeDef GPIO_Speed;





  GPIOMode_TypeDef GPIO_Mode;



}GPIO_InitTypeDef;













typedef enum

{ Bit_RESET = 0,

  Bit_SET

}BitAction;

void GPIO_DeInit(GPIO_TypeDef* GPIOx);

void GPIO_AFIODeInit(void);

void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);

void GPIO_StructInit(GPIO_InitTypeDef* GPIO_InitStruct);

uint8_t GPIO_ReadInputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

uint16_t GPIO_ReadInputData(GPIO_TypeDef* GPIOx);

uint8_t GPIO_ReadOutputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

uint16_t GPIO_ReadOutputData(GPIO_TypeDef* GPIOx);

void GPIO_SetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void GPIO_ResetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void GPIO_WriteBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, BitAction BitVal);

void GPIO_Write(GPIO_TypeDef* GPIOx, uint16_t PortVal);

void GPIO_PinLockConfig(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

void GPIO_EventOutputConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);

void GPIO_EventOutputCmd(FunctionalState NewState);

void GPIO_PinRemapConfig(uint32_t GPIO_Remap, FunctionalState NewState);

void GPIO_EXTILineConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);

void GPIO_ETH_MediaInterfaceConfig(uint32_t GPIO_ETH_MediaInterface);
