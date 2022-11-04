#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"
#include "control_led.h"
#include "control_sw.h"
#define PAUSE_MS 5000
#define SMALL_PAUSE_MS 500
#define ARRAY_SIZE_OF_BLINK 4
int main(void)
{   
    leds_init();
    leds_off();
    switch_init();
    // 0 - Yellow
    // 1 - Red
    // 2 - Green
    // 3 - Blue
    int arr[2][ARRAY_SIZE_OF_BLINK]={{6,5,7,9}, {0, 1, 2, 3}}; // вторая строка для расположения светодиодов в нужном порядке
    while(true){                                               
        for(int j=0; j<ARRAY_SIZE_OF_BLINK; j++){
            for(int k=0; k<arr[0][j]; k++){
                int number_of_led=arr[1][j];
                turn_on_led(number_of_led);
                nrf_delay_ms(SMALL_PAUSE_MS);
                while(!is_switch_press()){
                    nrf_delay_ms(100);
                }
                turn_off_led(number_of_led);
                nrf_delay_ms(SMALL_PAUSE_MS);
                while(!is_switch_press()){
                    nrf_delay_ms(100);
                }
                leds_off();
            }
        }
    }
}      
