#include "tim.h"

#define TIM2EN (1U<<0)
#define CR1_CEN (1U<<0)

void tim21HzInit(void) {

    //Enable clock acess to tim 2
    RCC->APB1ENR |= TIM2EN;

    //Setting the prescaler
    TIM2->PSC = 1600 - 1;

    //Sets the auto-reload value
    TIM2->ARR = 10000 - 1;

    //Clear the value in the counter
    TIM2->CNT = 0;

    //Enable the timer
    TIM2->CR1 = CR1_CEN;

}