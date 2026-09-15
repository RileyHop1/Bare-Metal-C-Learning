#include "gpio.h"
#include "systick.h"


#define AMOUNT_I_WANTED_DELAYED 500



int main(void) {

	ledInit();
	buttonInit();

	while(true) {

		sysTickMSecDelay(AMOUNT_I_WANTED_DELAYED);
		ledToggle();
	}
	return 0;
}
