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
|7-segment display| Output |PA0 - PA6| (7 output pins)|

### 7-Segment Definition
|Digit|Peripheral|
|--|--|
|g|PA0|
|f|PA1|
|a|PA2|
|b|PA3|
|c|PA4|
|d|PA5|
|e|PA6|

|Digit|PA6[e]|PA5[d]|PA4[c]|PA3[b]|PA2[a]|PA1[f]|PA0[g]|Hex|
|--|--|--|--|--|--|--|--|--|
|0|1|1|1|1|1|1|0|0x7E|
|1|0|0|1|1|0|0|0|0x18|
|2|1|1|0|1|1|0|1|0x6D|
|3|0|1|1|1|1|0|1|0x3D|
|4|0|0|1|1|0|1|1|0x1B|
|5|0|1|1|0|1|1|1|0x37|
|6|1|1|1|0|1|1|1|0x77|
|7|0|0|1|1|1|0|0|0x1C|
|8|1|1|1|1|1|1|1|0x7F|
|9|0|0|1|1|1|1|1|0x1F|
|-|0|0|0|0|0|0|1|0x01|

