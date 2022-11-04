#ifndef CONTROL_SW
#define CONTROL_SW
#include "nrf_gpio.h"

void switch_init();

bool is_switch_press();

#endif
