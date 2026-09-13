#include "gpio.h"

#define WAIT_TIME 100000

void wait(const int time) {
	for (unsigned int i = 0; i < time; ++i) {}
}

int main(void) {
	ledInit();
	while(1) {
		ledOn();
		wait(WAIT_TIME);
		ledOff();
		wait(WAIT_TIME);
	}
	return 0;
}
