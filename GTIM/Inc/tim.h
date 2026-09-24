#include "stm32f4xx.h"

#ifndef TIM_H_
#define TIM_H_


#define SR_UIF (1U<<0) // This bit represents the UIF in the SR of th timer when a UEV event happens this value will be set. 
void tim21HzInit(void);



#endif