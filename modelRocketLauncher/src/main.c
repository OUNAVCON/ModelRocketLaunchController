/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "main.h"
#include "BlinkLed.h"
#include "beeper.h"
#include "deadManSwitch.h"
#include "igniter.h"
#include "rcc.h"
#include "sevenSegment.h"

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

extern __IO uint32_t TimeDisplay;

int main(int argc, char* argv[]) {
	uint32_t seconds = -1;
	uint8_t count = 0x9;
	deadManSwtichState_t switchState = DEADMAN_SWITCH_STATE_INACTIVE;
	states_t state = STATE_RESET;
//	initIgniter();
	initSevenSegment();
	initBeeper();
	initRtc();
	/*
	 * Run power up self test
	 * validateSwitch();
	 * validateRelayOff();
	 */
//  trace_puts("Hello ARM World!");
//  trace_printf("System clock: %u Hz\n", SystemCoreClock);

	while (1) {

		/*
		 * Test the output state. Make sure we aren't failing.   //check for current draw on high side source.
		 * Check battery voltage...don't want to try and fire with a low battery.
		 */
		switchState = readCurrentDeadManSwitchState();

		switch (state) {
		case STATE_ARMED:
			if (DEADMAN_SWITCH_STATE_INACTIVE == switchState) {
				state = STATE_RESET;
			}
			if (seconds != TimeDisplay) { //Seconds loop.
				updateSevenSegment(count);
				seconds = TimeDisplay;
				if (count != 0) {
					count--;
				} else {
					state = STATE_LAUNCH;
					count = 3;
				}
			}
			break;
		case STATE_LAUNCH:
			if (seconds != TimeDisplay) { //Seconds loop.
				seconds = TimeDisplay;
				//close the relay.
				beeperOn();
				if (count == 0) {
					state = STATE_RESET;
				} else {
					count--;
				}
				break;
				default:
				case STATE_RESET:
				count = 9;
				beeperOff();
				updateSevenSegment(0xF);
				if (DEADMAN_SWITCH_STATE_ACTIVE == switchState) {
					state = STATE_ARMED;
				}
				break;
			}
		}
	}
}

/**
 * @brief  Configures the nested vectored interrupt controller.
 * @param  None
 * @retval None
 */
void NVIC_Configuration(void) {
	NVIC_InitTypeDef NVIC_InitStructure;

	/* Configure one bit for preemption priority */
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);

	/* Enable the RTC Interrupt */
	NVIC_InitStructure.NVIC_IRQChannel = RTC_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
