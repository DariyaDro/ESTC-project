
/** @file
 *
 * @defgroup blinky_example_main main.c
 * @{
 * @ingroup blinky_example
 * @brief Blinky Example Application main file.
 *
 * This file contains the source code for a sample application to blink LEDs.
 *
 */

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"
#define PAUSE 5000
#define SMALL_PAUSE 500

/**
 * @brief Function for application main entry.
 */
int main(void)
{
    /* Configure board. */
    bsp_board_init(BSP_INIT_LEDS);
    

    /* Toggle LEDs. */
   while (true)
    {
        for(int j=0; j<LEDS_NUMBER; j++){
            for(int i=0; i<6*2; i++){
                bsp_board_led_invert(j);
                nrf_delay_ms(SMALL_PAUSE);
            }
            nrf_delay_ms(PAUSE);
            for(int i=0; i<5*2; i++){
                bsp_board_led_invert(j);
                nrf_delay_ms(SMALL_PAUSE);
            }
            nrf_delay_ms(PAUSE);
            for(int i=0; i<7*2; i++){
                bsp_board_led_invert(j);
                nrf_delay_ms(SMALL_PAUSE);
            }
            nrf_delay_ms(PAUSE);
            for(int i=0; i<9*2; i++){
                bsp_board_led_invert(j);
                nrf_delay_ms(SMALL_PAUSE);
            }
        }
   }
}
