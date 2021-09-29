#include "major1.h"

bool parity(unsigned long value)
{
    int count = 0;
    while(value)
    {
        count += value & 1;
        value = value >> 1;
    }

    if(count % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}