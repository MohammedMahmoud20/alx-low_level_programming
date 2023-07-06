#include "main.h"
/**
 *get_bit - return the value on a given index
 *@n: the integer number
 *@index: the given index
 *return: the bit value 
*/
int get_bit(unsigned long int n, unsigned int index)
{
  int f=1;
  f=f<<index;
  if(n&f==0)
    {
      return (0);
    }else if(n&f==1)
    {
      return (1);
    }else
    {
      return (-1);
    }
}
