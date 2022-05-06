#include "uart.h"
#include "axi4lite.h"
#include <stdint.h>

Caxi4lite axi;
CUART uart;

void controller()
{
    uart.uprint("This is a new long message test via the new uprint!\n");
}
