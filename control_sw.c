#include "control_sw.h"

#define PIN_SW NRF_GPIO_PIN_MAP(1, 6)

void switch_init(){
    nrf_gpio_cfg_input(PIN_SW, NRF_GPIO_PIN_PULLUP);
}

bool is_switch_press(){
    return (!nrf_gpio_pin_read(PIN_SW));
}
