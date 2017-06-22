#include "build/temp/_test_sevenSegment.c"
#include "mock_stm32f10x_rcc.h"
#include "mock_stm32f10x_gpio.h"
#include "stm32f10x.h"
#include "sevenSegment.h"
#include "unity.h"


void setUp(){



}



void tearDown(){



}



void test_init(void){



 uint16_t portValue = 0x00;

 uint8_t character = 0U;

 uint16_t expectedResult = 0x7E;



 GPIO_ReadOutputData_CMockExpectAndReturn(21, ((GPIO_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x0800)), portValue);

 GPIO_Write_CMockExpect(22, ((GPIO_TypeDef *) ((((uint32_t)0x40000000) + 0x10000) + 0x0800)), expectedResult);

 updateSevenSegment(character);



}
