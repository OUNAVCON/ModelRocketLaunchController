/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STM32F10X_RCC_H
#define _MOCK_STM32F10X_RCC_H

#include "stm32f10x_rcc.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_stm32f10x_rcc_Init(void);
void mock_stm32f10x_rcc_Destroy(void);
void mock_stm32f10x_rcc_Verify(void);




#define RCC_DeInit_Ignore() RCC_DeInit_CMockIgnore()
void RCC_DeInit_CMockIgnore(void);
#define RCC_DeInit_Expect() RCC_DeInit_CMockExpect(__LINE__)
void RCC_DeInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_RCC_DeInit_CALLBACK)(int cmock_num_calls);
void RCC_DeInit_StubWithCallback(CMOCK_RCC_DeInit_CALLBACK Callback);
#define RCC_HSEConfig_Ignore() RCC_HSEConfig_CMockIgnore()
void RCC_HSEConfig_CMockIgnore(void);
#define RCC_HSEConfig_Expect(RCC_HSE) RCC_HSEConfig_CMockExpect(__LINE__, RCC_HSE)
void RCC_HSEConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_HSE);
typedef void (* CMOCK_RCC_HSEConfig_CALLBACK)(uint32_t RCC_HSE, int cmock_num_calls);
void RCC_HSEConfig_StubWithCallback(CMOCK_RCC_HSEConfig_CALLBACK Callback);
#define RCC_WaitForHSEStartUp_IgnoreAndReturn(cmock_retval) RCC_WaitForHSEStartUp_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void RCC_WaitForHSEStartUp_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, ErrorStatus cmock_to_return);
#define RCC_WaitForHSEStartUp_ExpectAndReturn(cmock_retval) RCC_WaitForHSEStartUp_CMockExpectAndReturn(__LINE__, cmock_retval)
void RCC_WaitForHSEStartUp_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ErrorStatus cmock_to_return);
typedef ErrorStatus (* CMOCK_RCC_WaitForHSEStartUp_CALLBACK)(int cmock_num_calls);
void RCC_WaitForHSEStartUp_StubWithCallback(CMOCK_RCC_WaitForHSEStartUp_CALLBACK Callback);
#define RCC_AdjustHSICalibrationValue_Ignore() RCC_AdjustHSICalibrationValue_CMockIgnore()
void RCC_AdjustHSICalibrationValue_CMockIgnore(void);
#define RCC_AdjustHSICalibrationValue_Expect(HSICalibrationValue) RCC_AdjustHSICalibrationValue_CMockExpect(__LINE__, HSICalibrationValue)
void RCC_AdjustHSICalibrationValue_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t HSICalibrationValue);
typedef void (* CMOCK_RCC_AdjustHSICalibrationValue_CALLBACK)(uint8_t HSICalibrationValue, int cmock_num_calls);
void RCC_AdjustHSICalibrationValue_StubWithCallback(CMOCK_RCC_AdjustHSICalibrationValue_CALLBACK Callback);
#define RCC_HSICmd_Ignore() RCC_HSICmd_CMockIgnore()
void RCC_HSICmd_CMockIgnore(void);
#define RCC_HSICmd_Expect(NewState) RCC_HSICmd_CMockExpect(__LINE__, NewState)
void RCC_HSICmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_HSICmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_HSICmd_StubWithCallback(CMOCK_RCC_HSICmd_CALLBACK Callback);
#define RCC_PLLConfig_Ignore() RCC_PLLConfig_CMockIgnore()
void RCC_PLLConfig_CMockIgnore(void);
#define RCC_PLLConfig_Expect(RCC_PLLSource, RCC_PLLMul) RCC_PLLConfig_CMockExpect(__LINE__, RCC_PLLSource, RCC_PLLMul)
void RCC_PLLConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_PLLSource, uint32_t RCC_PLLMul);
typedef void (* CMOCK_RCC_PLLConfig_CALLBACK)(uint32_t RCC_PLLSource, uint32_t RCC_PLLMul, int cmock_num_calls);
void RCC_PLLConfig_StubWithCallback(CMOCK_RCC_PLLConfig_CALLBACK Callback);
#define RCC_PLLCmd_Ignore() RCC_PLLCmd_CMockIgnore()
void RCC_PLLCmd_CMockIgnore(void);
#define RCC_PLLCmd_Expect(NewState) RCC_PLLCmd_CMockExpect(__LINE__, NewState)
void RCC_PLLCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_PLLCmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_PLLCmd_StubWithCallback(CMOCK_RCC_PLLCmd_CALLBACK Callback);
#define RCC_SYSCLKConfig_Ignore() RCC_SYSCLKConfig_CMockIgnore()
void RCC_SYSCLKConfig_CMockIgnore(void);
#define RCC_SYSCLKConfig_Expect(RCC_SYSCLKSource) RCC_SYSCLKConfig_CMockExpect(__LINE__, RCC_SYSCLKSource)
void RCC_SYSCLKConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_SYSCLKSource);
typedef void (* CMOCK_RCC_SYSCLKConfig_CALLBACK)(uint32_t RCC_SYSCLKSource, int cmock_num_calls);
void RCC_SYSCLKConfig_StubWithCallback(CMOCK_RCC_SYSCLKConfig_CALLBACK Callback);
#define RCC_GetSYSCLKSource_IgnoreAndReturn(cmock_retval) RCC_GetSYSCLKSource_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void RCC_GetSYSCLKSource_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
#define RCC_GetSYSCLKSource_ExpectAndReturn(cmock_retval) RCC_GetSYSCLKSource_CMockExpectAndReturn(__LINE__, cmock_retval)
void RCC_GetSYSCLKSource_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t cmock_to_return);
typedef uint8_t (* CMOCK_RCC_GetSYSCLKSource_CALLBACK)(int cmock_num_calls);
void RCC_GetSYSCLKSource_StubWithCallback(CMOCK_RCC_GetSYSCLKSource_CALLBACK Callback);
#define RCC_HCLKConfig_Ignore() RCC_HCLKConfig_CMockIgnore()
void RCC_HCLKConfig_CMockIgnore(void);
#define RCC_HCLKConfig_Expect(RCC_SYSCLK) RCC_HCLKConfig_CMockExpect(__LINE__, RCC_SYSCLK)
void RCC_HCLKConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_SYSCLK);
typedef void (* CMOCK_RCC_HCLKConfig_CALLBACK)(uint32_t RCC_SYSCLK, int cmock_num_calls);
void RCC_HCLKConfig_StubWithCallback(CMOCK_RCC_HCLKConfig_CALLBACK Callback);
#define RCC_PCLK1Config_Ignore() RCC_PCLK1Config_CMockIgnore()
void RCC_PCLK1Config_CMockIgnore(void);
#define RCC_PCLK1Config_Expect(RCC_HCLK) RCC_PCLK1Config_CMockExpect(__LINE__, RCC_HCLK)
void RCC_PCLK1Config_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_HCLK);
typedef void (* CMOCK_RCC_PCLK1Config_CALLBACK)(uint32_t RCC_HCLK, int cmock_num_calls);
void RCC_PCLK1Config_StubWithCallback(CMOCK_RCC_PCLK1Config_CALLBACK Callback);
#define RCC_PCLK2Config_Ignore() RCC_PCLK2Config_CMockIgnore()
void RCC_PCLK2Config_CMockIgnore(void);
#define RCC_PCLK2Config_Expect(RCC_HCLK) RCC_PCLK2Config_CMockExpect(__LINE__, RCC_HCLK)
void RCC_PCLK2Config_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_HCLK);
typedef void (* CMOCK_RCC_PCLK2Config_CALLBACK)(uint32_t RCC_HCLK, int cmock_num_calls);
void RCC_PCLK2Config_StubWithCallback(CMOCK_RCC_PCLK2Config_CALLBACK Callback);
#define RCC_ITConfig_Ignore() RCC_ITConfig_CMockIgnore()
void RCC_ITConfig_CMockIgnore(void);
#define RCC_ITConfig_Expect(RCC_IT, NewState) RCC_ITConfig_CMockExpect(__LINE__, RCC_IT, NewState)
void RCC_ITConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t RCC_IT, FunctionalState NewState);
typedef void (* CMOCK_RCC_ITConfig_CALLBACK)(uint8_t RCC_IT, FunctionalState NewState, int cmock_num_calls);
void RCC_ITConfig_StubWithCallback(CMOCK_RCC_ITConfig_CALLBACK Callback);
#define RCC_USBCLKConfig_Ignore() RCC_USBCLKConfig_CMockIgnore()
void RCC_USBCLKConfig_CMockIgnore(void);
#define RCC_USBCLKConfig_Expect(RCC_USBCLKSource) RCC_USBCLKConfig_CMockExpect(__LINE__, RCC_USBCLKSource)
void RCC_USBCLKConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_USBCLKSource);
typedef void (* CMOCK_RCC_USBCLKConfig_CALLBACK)(uint32_t RCC_USBCLKSource, int cmock_num_calls);
void RCC_USBCLKConfig_StubWithCallback(CMOCK_RCC_USBCLKConfig_CALLBACK Callback);
#define RCC_ADCCLKConfig_Ignore() RCC_ADCCLKConfig_CMockIgnore()
void RCC_ADCCLKConfig_CMockIgnore(void);
#define RCC_ADCCLKConfig_Expect(RCC_PCLK2) RCC_ADCCLKConfig_CMockExpect(__LINE__, RCC_PCLK2)
void RCC_ADCCLKConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_PCLK2);
typedef void (* CMOCK_RCC_ADCCLKConfig_CALLBACK)(uint32_t RCC_PCLK2, int cmock_num_calls);
void RCC_ADCCLKConfig_StubWithCallback(CMOCK_RCC_ADCCLKConfig_CALLBACK Callback);
#define RCC_LSEConfig_Ignore() RCC_LSEConfig_CMockIgnore()
void RCC_LSEConfig_CMockIgnore(void);
#define RCC_LSEConfig_Expect(RCC_LSE) RCC_LSEConfig_CMockExpect(__LINE__, RCC_LSE)
void RCC_LSEConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t RCC_LSE);
typedef void (* CMOCK_RCC_LSEConfig_CALLBACK)(uint8_t RCC_LSE, int cmock_num_calls);
void RCC_LSEConfig_StubWithCallback(CMOCK_RCC_LSEConfig_CALLBACK Callback);
#define RCC_LSICmd_Ignore() RCC_LSICmd_CMockIgnore()
void RCC_LSICmd_CMockIgnore(void);
#define RCC_LSICmd_Expect(NewState) RCC_LSICmd_CMockExpect(__LINE__, NewState)
void RCC_LSICmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_LSICmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_LSICmd_StubWithCallback(CMOCK_RCC_LSICmd_CALLBACK Callback);
#define RCC_RTCCLKConfig_Ignore() RCC_RTCCLKConfig_CMockIgnore()
void RCC_RTCCLKConfig_CMockIgnore(void);
#define RCC_RTCCLKConfig_Expect(RCC_RTCCLKSource) RCC_RTCCLKConfig_CMockExpect(__LINE__, RCC_RTCCLKSource)
void RCC_RTCCLKConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_RTCCLKSource);
typedef void (* CMOCK_RCC_RTCCLKConfig_CALLBACK)(uint32_t RCC_RTCCLKSource, int cmock_num_calls);
void RCC_RTCCLKConfig_StubWithCallback(CMOCK_RCC_RTCCLKConfig_CALLBACK Callback);
#define RCC_RTCCLKCmd_Ignore() RCC_RTCCLKCmd_CMockIgnore()
void RCC_RTCCLKCmd_CMockIgnore(void);
#define RCC_RTCCLKCmd_Expect(NewState) RCC_RTCCLKCmd_CMockExpect(__LINE__, NewState)
void RCC_RTCCLKCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_RTCCLKCmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_RTCCLKCmd_StubWithCallback(CMOCK_RCC_RTCCLKCmd_CALLBACK Callback);
#define RCC_GetClocksFreq_Ignore() RCC_GetClocksFreq_CMockIgnore()
void RCC_GetClocksFreq_CMockIgnore(void);
#define RCC_GetClocksFreq_Expect(RCC_Clocks) RCC_GetClocksFreq_CMockExpect(__LINE__, RCC_Clocks)
void RCC_GetClocksFreq_CMockExpect(UNITY_LINE_TYPE cmock_line, RCC_ClocksTypeDef* RCC_Clocks);
typedef void (* CMOCK_RCC_GetClocksFreq_CALLBACK)(RCC_ClocksTypeDef* RCC_Clocks, int cmock_num_calls);
void RCC_GetClocksFreq_StubWithCallback(CMOCK_RCC_GetClocksFreq_CALLBACK Callback);
#define RCC_AHBPeriphClockCmd_Ignore() RCC_AHBPeriphClockCmd_CMockIgnore()
void RCC_AHBPeriphClockCmd_CMockIgnore(void);
#define RCC_AHBPeriphClockCmd_Expect(RCC_AHBPeriph, NewState) RCC_AHBPeriphClockCmd_CMockExpect(__LINE__, RCC_AHBPeriph, NewState)
void RCC_AHBPeriphClockCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_AHBPeriph, FunctionalState NewState);
typedef void (* CMOCK_RCC_AHBPeriphClockCmd_CALLBACK)(uint32_t RCC_AHBPeriph, FunctionalState NewState, int cmock_num_calls);
void RCC_AHBPeriphClockCmd_StubWithCallback(CMOCK_RCC_AHBPeriphClockCmd_CALLBACK Callback);
#define RCC_APB2PeriphClockCmd_Ignore() RCC_APB2PeriphClockCmd_CMockIgnore()
void RCC_APB2PeriphClockCmd_CMockIgnore(void);
#define RCC_APB2PeriphClockCmd_Expect(RCC_APB2Periph, NewState) RCC_APB2PeriphClockCmd_CMockExpect(__LINE__, RCC_APB2Periph, NewState)
void RCC_APB2PeriphClockCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_APB2Periph, FunctionalState NewState);
typedef void (* CMOCK_RCC_APB2PeriphClockCmd_CALLBACK)(uint32_t RCC_APB2Periph, FunctionalState NewState, int cmock_num_calls);
void RCC_APB2PeriphClockCmd_StubWithCallback(CMOCK_RCC_APB2PeriphClockCmd_CALLBACK Callback);
#define RCC_APB1PeriphClockCmd_Ignore() RCC_APB1PeriphClockCmd_CMockIgnore()
void RCC_APB1PeriphClockCmd_CMockIgnore(void);
#define RCC_APB1PeriphClockCmd_Expect(RCC_APB1Periph, NewState) RCC_APB1PeriphClockCmd_CMockExpect(__LINE__, RCC_APB1Periph, NewState)
void RCC_APB1PeriphClockCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_APB1Periph, FunctionalState NewState);
typedef void (* CMOCK_RCC_APB1PeriphClockCmd_CALLBACK)(uint32_t RCC_APB1Periph, FunctionalState NewState, int cmock_num_calls);
void RCC_APB1PeriphClockCmd_StubWithCallback(CMOCK_RCC_APB1PeriphClockCmd_CALLBACK Callback);
#define RCC_APB2PeriphResetCmd_Ignore() RCC_APB2PeriphResetCmd_CMockIgnore()
void RCC_APB2PeriphResetCmd_CMockIgnore(void);
#define RCC_APB2PeriphResetCmd_Expect(RCC_APB2Periph, NewState) RCC_APB2PeriphResetCmd_CMockExpect(__LINE__, RCC_APB2Periph, NewState)
void RCC_APB2PeriphResetCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_APB2Periph, FunctionalState NewState);
typedef void (* CMOCK_RCC_APB2PeriphResetCmd_CALLBACK)(uint32_t RCC_APB2Periph, FunctionalState NewState, int cmock_num_calls);
void RCC_APB2PeriphResetCmd_StubWithCallback(CMOCK_RCC_APB2PeriphResetCmd_CALLBACK Callback);
#define RCC_APB1PeriphResetCmd_Ignore() RCC_APB1PeriphResetCmd_CMockIgnore()
void RCC_APB1PeriphResetCmd_CMockIgnore(void);
#define RCC_APB1PeriphResetCmd_Expect(RCC_APB1Periph, NewState) RCC_APB1PeriphResetCmd_CMockExpect(__LINE__, RCC_APB1Periph, NewState)
void RCC_APB1PeriphResetCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t RCC_APB1Periph, FunctionalState NewState);
typedef void (* CMOCK_RCC_APB1PeriphResetCmd_CALLBACK)(uint32_t RCC_APB1Periph, FunctionalState NewState, int cmock_num_calls);
void RCC_APB1PeriphResetCmd_StubWithCallback(CMOCK_RCC_APB1PeriphResetCmd_CALLBACK Callback);
#define RCC_BackupResetCmd_Ignore() RCC_BackupResetCmd_CMockIgnore()
void RCC_BackupResetCmd_CMockIgnore(void);
#define RCC_BackupResetCmd_Expect(NewState) RCC_BackupResetCmd_CMockExpect(__LINE__, NewState)
void RCC_BackupResetCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_BackupResetCmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_BackupResetCmd_StubWithCallback(CMOCK_RCC_BackupResetCmd_CALLBACK Callback);
#define RCC_ClockSecuritySystemCmd_Ignore() RCC_ClockSecuritySystemCmd_CMockIgnore()
void RCC_ClockSecuritySystemCmd_CMockIgnore(void);
#define RCC_ClockSecuritySystemCmd_Expect(NewState) RCC_ClockSecuritySystemCmd_CMockExpect(__LINE__, NewState)
void RCC_ClockSecuritySystemCmd_CMockExpect(UNITY_LINE_TYPE cmock_line, FunctionalState NewState);
typedef void (* CMOCK_RCC_ClockSecuritySystemCmd_CALLBACK)(FunctionalState NewState, int cmock_num_calls);
void RCC_ClockSecuritySystemCmd_StubWithCallback(CMOCK_RCC_ClockSecuritySystemCmd_CALLBACK Callback);
#define RCC_MCOConfig_Ignore() RCC_MCOConfig_CMockIgnore()
void RCC_MCOConfig_CMockIgnore(void);
#define RCC_MCOConfig_Expect(RCC_MCO) RCC_MCOConfig_CMockExpect(__LINE__, RCC_MCO)
void RCC_MCOConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t RCC_MCO);
typedef void (* CMOCK_RCC_MCOConfig_CALLBACK)(uint8_t RCC_MCO, int cmock_num_calls);
void RCC_MCOConfig_StubWithCallback(CMOCK_RCC_MCOConfig_CALLBACK Callback);
#define RCC_GetFlagStatus_IgnoreAndReturn(cmock_retval) RCC_GetFlagStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void RCC_GetFlagStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, FlagStatus cmock_to_return);
#define RCC_GetFlagStatus_ExpectAndReturn(RCC_FLAG, cmock_retval) RCC_GetFlagStatus_CMockExpectAndReturn(__LINE__, RCC_FLAG, cmock_retval)
void RCC_GetFlagStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t RCC_FLAG, FlagStatus cmock_to_return);
typedef FlagStatus (* CMOCK_RCC_GetFlagStatus_CALLBACK)(uint8_t RCC_FLAG, int cmock_num_calls);
void RCC_GetFlagStatus_StubWithCallback(CMOCK_RCC_GetFlagStatus_CALLBACK Callback);
#define RCC_ClearFlag_Ignore() RCC_ClearFlag_CMockIgnore()
void RCC_ClearFlag_CMockIgnore(void);
#define RCC_ClearFlag_Expect() RCC_ClearFlag_CMockExpect(__LINE__)
void RCC_ClearFlag_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_RCC_ClearFlag_CALLBACK)(int cmock_num_calls);
void RCC_ClearFlag_StubWithCallback(CMOCK_RCC_ClearFlag_CALLBACK Callback);
#define RCC_GetITStatus_IgnoreAndReturn(cmock_retval) RCC_GetITStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void RCC_GetITStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, ITStatus cmock_to_return);
#define RCC_GetITStatus_ExpectAndReturn(RCC_IT, cmock_retval) RCC_GetITStatus_CMockExpectAndReturn(__LINE__, RCC_IT, cmock_retval)
void RCC_GetITStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t RCC_IT, ITStatus cmock_to_return);
typedef ITStatus (* CMOCK_RCC_GetITStatus_CALLBACK)(uint8_t RCC_IT, int cmock_num_calls);
void RCC_GetITStatus_StubWithCallback(CMOCK_RCC_GetITStatus_CALLBACK Callback);
#define RCC_ClearITPendingBit_Ignore() RCC_ClearITPendingBit_CMockIgnore()
void RCC_ClearITPendingBit_CMockIgnore(void);
#define RCC_ClearITPendingBit_Expect(RCC_IT) RCC_ClearITPendingBit_CMockExpect(__LINE__, RCC_IT)
void RCC_ClearITPendingBit_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t RCC_IT);
typedef void (* CMOCK_RCC_ClearITPendingBit_CALLBACK)(uint8_t RCC_IT, int cmock_num_calls);
void RCC_ClearITPendingBit_StubWithCallback(CMOCK_RCC_ClearITPendingBit_CALLBACK Callback);

#endif