/**
 *
 *
 *
 *
 *reset_to_98 - a function that takes a pointer to an int as parameter and updates the value it points to to 98.
 *
*/
#include "main.h"

void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;
}
