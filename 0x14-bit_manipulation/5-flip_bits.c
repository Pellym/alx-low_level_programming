#include "main.h"

/**
 *  returns the number of bits you would need to flip to get from one number to another.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counts, n, m;

	for (counts = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		     counts++;
	}
	return (counts);
}
