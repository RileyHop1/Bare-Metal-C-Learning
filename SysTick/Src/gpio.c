#include "gpio.h"

#define GPIOAEN (1U<<0)  //This is used to enable the clock for GPIOA.
#define GPIOCEN (1U<<2)
#define LED_BS5 (1U<<5)  //This is the set bit.
#define LED_BR5 (1U<<21) //This is the reset bit.
#define BTN_PIN (1U<<13)
#define LED_PIN (1U<<5)

//This function toggles the GPIOAs ouptdata register.
void ledToggle(void) {
	GPIOA->ODR ^= LED_PIN;

}

//This function initializes GPIOC
void buttonInit(void) {
    RCC->AHB1ENR |= GPIOCEN;

    GPIOC->MODER &= ~(1U<<26);
    GPIOC->MODER &= ~(1U<<27); 

}

//This function check the logic level of the button.
//IDR here is the input data register.
bool getBtnState(void) {
    if (GPIOC->IDR & BTN_PIN) {
        return false;
    } else {
        return true;
    }
}

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