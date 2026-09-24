
CC = arm-none-eabi-gcc
CFLAGS = -c -mcpu=cortex-m4 -mthumb -std=gnu11 -DSTM32F411xE -I ./Inc -I ./chip_headers/CMSIS/Include -I ./chip_headers/CMSIS/Device/ST/STM32F4xx/Include
LDFLAGS = -mcpu=cortex-m4 -mthumb -nostdlib -nostartfiles -T STM32F411RETX_FLASH.ld -Wl,-Map=5_makefile_project_v2.map

final : 5_makefile_project_v2.elf 

tim.o : Src/tim.c
	$(CC) $(CFLAGS)  $^ -o $@

gpio.o : Src/gpio.c
	$(CC) $(CFLAGS)  $^ -o $@
	
systick.o : Src/systick.c
	$(CC) $(CFLAGS)  $^ -o $@

main.o : Src/main.c
	$(CC) $(CFLAGS)  $^ -o $@
	
startup.o : Startup/startup_stm32f411retx.s
	$(CC) $(CFLAGS) $^ -o $@
	
5_makefile_project_v2.elf : tim.o systick.o gpio.o main.o startup.o
	$(CC) $(LDFLAGS) $^ -o $@

load :
	openocd -f board/st_nucleo_f4.cfg -c "program 5_makefile_project_v2.elf verify reset exit"
clean:
	rm	-f *.o *.elf *.map