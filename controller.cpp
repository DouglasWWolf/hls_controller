#include "uart.h"
#include "axi4lite.h"
#include <stdint.h>

Caxi4lite axi;
CUART uart;




void controller()
{
    uint32_t loop = 1;
    uint32_t a1 = loop-1;
    uint32_t a2 = loop+123;
    uint32_t a3 = loop-4321;

    for (int i=0; i<4; ++i)
    {
        #pragma HLS pipeline off

        switch(i) 
        {
        case 0: uart.print("This is a new long message test via the new uprint: %i!\n", a1);
                break;

        case 1: uart.print("This is a new long message test via the new uprint: #%6i#!\n", a2);
                break;

        case 2: uart.print("This is a new long message test via the new uprint: #%6i#!\n", a3);
                break;

        case 3: uart.print("In hex: %i %u 0x%08X\n", a1, a1, a1);
                break;
        }
    }

}
