#include "main.h"

/**
 *set_bit - setting bit in the given  index
 *@n: the int number
 *@nidex: the given index
 *@f:the number to be shifted
*/
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(n)*8 )
    {
        return (-1);
    }
    int f=1;
    f=f<<index;
    return (*n & f)|(~1 & f);
}
