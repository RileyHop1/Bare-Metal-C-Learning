#include "gpio.h"
#include "tim.h"
#include "systick.h"


#define AMOUNT_I_WANTED_DELAYED 500



int main(void) {

	ledInit();

	tim21HzInit();


	while(true) {

		ledToggle();
		while(!(TIM2->SR & SR_UIF)) {}

		TIM2->SR &= ~SR_UIF;
	}
	return 0;

}
