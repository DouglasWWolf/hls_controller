#include <hls_stream.h>
#include <stdint.h>

hls::stream<char> stream1;

class Cobject
{
public:
    void write(char c);
};

void Cobject::write(char c)
{
    stream1.write(c);
}

Cobject object;

void test_function()
{
    object.write('A');
}
