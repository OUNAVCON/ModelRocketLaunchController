# ModelRocketLaunchController
A controller for the launch of model rockets.

Based on STM32F103C8T6 board from Ebay.[ STM32F103C8T6 Schematic](./documentation/STM32F103C8T6 Schematic.pdf) 


### Boot Settings
|Mode|Boot 1|Boot 0|
|--|--|--|
|User Flash (default)|Don't Care|0|
|System Memory (USART1)|1|0|
|SRAM|1|1| 


### Hardware Definition
|Function|Type|Pin|Comment|
|--|--|--|--|
|Push Button| Input |PC14| deadman switch|
|Beeper| GPIO / PWM |PA8||
|Igniter Relay| Output |PC15||
|Igniter Safety | A/D |PB1| To read current flow out of Relay|
|7-segment display| Output |PA0 - PA6| (7 output pins)

