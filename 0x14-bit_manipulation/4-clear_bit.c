#include "main.h"
/**
 * set_bit_to_zero - sets a bit to zero at a given index in a number
 * @n: the number to modify
 * @index: the index of the bit to set to zero
 * starting from 0 for the least significant bit
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= mask; /* Use bitwise AND to set the bit at the given index to 0 */

	return (1);
}
