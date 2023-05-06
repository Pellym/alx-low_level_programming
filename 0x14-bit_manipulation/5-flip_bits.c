#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		count++;
		i &= (i - 1);
	}

	/* Return the count of 1's */
	return (count);
}
