#include "gpio.h"

#define GPIOAEN (1U<<0)  //This is used to enable the clock for GPIOA.
#define LED_BS5 (1U<<5)  //This is the set bit.
#define LED_BR5 (1U<<21) //This is the reset bit.



//This function initializes the gpio pin to output mode.
void ledInit(void) {

    RCC->AHB1ENR |= GPIOAEN;
    GPIOA->MODER |= (1U<<10);
    GPIOA->MODER &= ~(1U<<11);
}

//This function sets the output to high.
void ledOn(void) {
    GPIOA->BSRR |= LED_BS5;
}


//This function sets the output to low.
void ledOff(void) {
    GPIOA->BSRR |= LED_BR5;
}