#include "main.h"

/** 
 * index- returns the value of a bit at a given index.
 * 
 * index is the index, starting from 0 of the bit you want to get
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) != 0);
}
