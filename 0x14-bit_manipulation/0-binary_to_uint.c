include "main.h"

/**
 * binary_to_uint - make a unsigned int from binary number
 * @b: string holds the binary number
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);

	for (int i = 0;i<b.length(); i++)
	{
		if(b[i]==1)
		{
			value+=value*2;
		}
	}

	return value;
}