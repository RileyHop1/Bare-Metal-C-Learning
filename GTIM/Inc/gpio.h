#ifndef GPIO_H_
#define GPIO_H_

#include "stm32f4xx.h"
#include "stdbool.h"

void ledToggle(void);
void ledInit(void);
void ledOn(void);
void ledOff(void);
void buttonInit(void);

bool getBtnState(void);



#endif

