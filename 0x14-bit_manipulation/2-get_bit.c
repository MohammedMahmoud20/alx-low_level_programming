#include "main.h"
/**
 *get_bit - return the value on a given index
 *@n: the integer number
 *@index: the given index
 *@f: integer to be shifted
 *return: the bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	int f = 1;
	f = f << index;
	return (n & f);
}
