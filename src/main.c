#include "stm32f407xx.h"

#include "gpio.h"

void main()
{
	SystemInit();
	SystemCoreClockUpdate();

	SysTick_Config(SystemCoreClock / 1000);

	// configure GREEN LED
	GPIO_Config_s gpio_a = GPIO_DEFAULT_OUTPUT(GPIOD, PIN_12);
	uint8_t res = gpio_configure(&gpio_a);

	gpio_set_output_state(GPIOD, PIN_12, GPIO_State_SET);

	// configure User Button
	//gpio_configure();

	while(1)
	{

	}
}