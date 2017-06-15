#ifndef DEAD_MAN_SWITCH
#define DEAD_MAN_SWITCH

typedef enum {
	DEADMAN_SWITCH_STATE_ACTIVE,
	DEADMAN_SWITCH_STATE_INACTIVE
}deadManSwtichState_t;

void initDeadManSwitch();

deadManSwtichState_t readCurrentDeadManSwitchState();

#endif
