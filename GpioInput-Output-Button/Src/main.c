#include "gpio.h"

int main(void) {

	ledInit();
	buttonInit();

	while(true) {

		if (getBtnState()) ledOn();
		else ledOff();

	}
	return 0;
}
