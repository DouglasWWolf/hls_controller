//=========================================================================================================
// uart.h - Defines a mechanism for interfacing to a UART
//=========================================================================================================
#pragma once
#include <stdint.h>
#include <hls_stream.h>

class CUART
{
public:

    void  uprint(const char* fmt, uint32_t v0 = 0, uint32_t v1 = 0, uint32_t v2 = 0, uint32_t v3 = 0);

    // Writes a number to the output in ASCII decimal
    void    write_dec(uint32_t value, bool is_signed, uint8_t width);

    void    write_char(const char    c);
    void    write_byte(const uint8_t c);

};


