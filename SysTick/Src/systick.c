#include "systick.h"



#define CRTL_ENABLE (1U<<0)
#define CTRL_CLCKSRC (1U<<2)
#define CTRL_COUNTFLAG (1U<<16) //Bit to check counter flag.
#define ONE_MSEC_LOAD 16000U //Be default these processors be chillin at 16Mhz


//This function delays the system for a inputed amount of milli seconds
// @param delay this is the amount milli seconds that will be delayed.
void sysTickMSecDelay(const uint32_t delay) {

    SysTick->LOAD = ONE_MSEC_LOAD;

    SysTick->VAL = 0;

    SysTick->CTRL = CTRL_CLCKSRC;
    
    SysTick->CTRL |= CRTL_ENABLE;

    for (int i = 0; i < delay; ++i) {
        while ((SysTick->CTRL & CTRL_COUNTFLAG) == 0) {}
    }


    SysTick->CTRL = 0;




}
