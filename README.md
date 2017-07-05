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
|Push Button| Input |PB0| deadman switch|
|Beeper| GPIO / PWM |PB1||
|Igniter Relay| Output |PX.y||
|Igniter Safety | A/D |PB1| To read current flow out of Relay|
|7-segment display| Output |PA0 - PA3| (7 output pins)|

### 7-Segment Definition
#### 74LS47 7-segment IC.
|74LS47|Peripheral|
|--|--|
|A|PA0|
|B|PA1|
|C|PA2|
|D|PA3|



