#include "unity.h"
#include "sevenSegment.h"
#include "stm32f10x.h"
#include "mock_stm32f10x_gpio.h"
#include "mock_stm32f10x_rcc.h"

void setUp(){

}

void tearDown(){

}

void test_init(void){
	//TEST_IGNORE_MESSAGE("No tests here.");
	uint16_t portValue = 0x00;
	uint8_t character = 0U;
	uint16_t expectedResult = 0x7E;

	GPIO_ReadOutputData_CMockExpectAndReturn(__LINE__, GPIOA, portValue);
	GPIO_Write_CMockExpect(__LINE__, GPIOA, expectedResult);
	updateSevenSegment(character);

}
