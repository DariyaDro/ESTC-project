#ifndef CONTROL_LED
#define CONTROL_LED
#include "nrf_gpio.h"

#define PIN_FOR_LED1 NRF_GPIO_PIN_MAP(0, 6)

void leds_init();

void leds_off();

void turn_on_led(int number_of_led);

void turn_off_led(int number_of_led);

#endif
