#include "main.h"
/**
 *get_bit - return the value on a given index
 *@n: the integer number
 *@index: the given index
 *return: the bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return(-1)
	}
	return (n << index & 1);
}
