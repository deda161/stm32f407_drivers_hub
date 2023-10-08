#include "stm32f407xx.h"

#include "gpio.h"
#include "rcc.h"

#include <limits.h>

void main()
{
	clocks_configure();
	SystemCoreClockUpdate();

	SysTick_Config(SystemCoreClock / 1000);

	// configure GREEN LED
	gpio_configure(GPIOD,
                   PIN_12,
                   GPIO_Mode_Output,
                   GPIO_OutputType_PushPull,
                   GPIO_Speed_Medium,
                   GPIO_PUPD_PullUp);

	gpio_setPin(GPIOD, PIN_12, GPIO_State_SET);

	uint8_t state = gpio_get_out_state(GPIOD, PIN_12);

	// configure User Button
	//gpio_configure();

	while(1)
	{

	}
}