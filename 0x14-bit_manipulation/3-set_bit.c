#include "main.h"

/**
 *set_bit - setting bit in the given  index
 *@n: the int number
 *@nidex: the given index
 *return: 1 if it worked, -1 if there is an error
*/
int set_bit(unsigned long int * n, unsigned int index)
{
    if ( index >= sizeof(n) * 8 )
    {
	    return (-1);
    }
    return (!!(*n |= 1L << index));
}
