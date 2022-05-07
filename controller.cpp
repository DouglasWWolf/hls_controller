#include "uart.h"
#include "axi4lite.h"
#include <stdint.h>

Caxi4lite axi;
CUART uart;


void controller()
{
    uint32_t switches;

    // Perform an AXI transaction to read the 16 switches on the development board
    axi.read(0x40700000, &switches);

    // Tell the user what hex and decimal value is represented by the switch settings
    uart.print("\nThe switch settings are 0x%04X (%u decimal)\n", switches, switches);

    // Loop through all 16 switches on the board...
    for (uint8_t i=0; i<16; ++i)
    {
        #pragma HLS pipeline off
        bool switch_state;

        // Examine the state of each switch and print a message stating
        // whether the switch is on or off
        for (uint8_t step=0; step<3; ++step)
        {
            #pragma HLS pipeline off
            #pragma HLS unroll
            switch(step)
            {
                case 0: switch_state = switches & (1<<i);
                        break;

                case 1: uart.print("Switch #%2u is ", i+1);
                        break;

                case 2: if (switch_state)
                            uart.print("ON\n");
                        else
                            uart.print("OFF\n");
                        break;
            }
        }

    }
    
}
