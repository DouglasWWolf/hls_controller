#include "uart.h"
#include "axi4lite.h"
#include <stdint.h>

Caxi4lite axi;
CUART uart;

void controller()
{
    sequenced:
    {
        #pragma HLS protocol
        uart.uprint("This is a new long message test via the new uprint: %i!\n", -1);
        uart.uprint("This is a new long message test via the new uprint: #%6i#!\n", 123);
        uart.uprint("This is a new long message test via the new uprint: #%6i#!\n", -4321);

    }

}
