#include "main.h"

/**
 * returns the value of a bit at a given index.
 * index is the index, starting from 0 of the bit you want to get
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit, i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1); /* error occured */
         	i = 1 << index;
	        bit = n & i;
	}
	if (bit == i)
		return (0);  
	return (1);
}

