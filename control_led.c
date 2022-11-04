#include "control_led.h"
#include "boards.h"
#define PIN_LED1 NRF_GPIO_PIN_MAP(0, 6)
#define PIN_LED2 NRF_GPIO_PIN_MAP(0, 8)
#define PIN_LED3 NRF_GPIO_PIN_MAP(1, 9)
#define PIN_LED4 NRF_GPIO_PIN_MAP(0, 12)
int array_leds_pin[LEDS_NUMBER]={PIN_LED1, PIN_LED2, PIN_LED3, PIN_LED4};

void leds_init(){
    for(int i=0; i<LEDS_NUMBER; i++){
        int pin=array_leds_pin[i];
        nrf_gpio_cfg_output(pin);
    }    
}

void leds_off(){
    for(int i=0; i<LEDS_NUMBER; i++){
        int pin=array_leds_pin[i];
        nrf_gpio_pin_write(pin, 1);
    }    
}

void turn_on_led(int number_of_led){
    int pin=array_leds_pin[number_of_led];
    nrf_gpio_pin_write(pin, 1);
}

void turn_off_led(int number_of_led){
    int pin=array_leds_pin[number_of_led];
    nrf_gpio_pin_write(pin, 0);
}
