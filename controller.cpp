#include "axi4lite.h"
#include <stdint.h>

Caxi4lite axi;

void controller()
{
    const uint32_t uart_base   = 0x40600000;
    const uint32_t uart_tx     = uart_base + 4;
	const uint32_t uart_status = uart_base + 8;

    uint32_t status;
    for (int i=0; i<2; ++i)
    {
		#pragma HLS pipeline off
    	switch(i)
    	{
    		case 0:	axi.write(uart_tx, 'K');
    				break;

    		case 1:	axi.read(0x40700000, &status);
    				break;
    	}

    }

}
