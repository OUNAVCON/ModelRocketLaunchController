#ifndef RCC_H
#define RCC_H


typedef struct{
	uint8_t hour;
	uint8_t minute;
	uint8_t second;
}timeHuman_t;

void initRtc(void);


#endif
