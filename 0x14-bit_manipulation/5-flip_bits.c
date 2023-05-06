#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to get the bit from
 * @index: the index of the bit to get, starting from 0 for the least significant bit
 *
 * Return: the value of the bit at the given index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
    /* Check if the index is valid for the given number */
    if (index >= sizeof(unsigned long int) * 8) {
        return (-1);
    }

    /* Shift the number right to get the bit at the desired index in the least significant position */
    unsigned long int mask = 1UL << index;
    unsigned long int bit = (n & mask) >> index;

    /* Return the value of the bit (0 or 1) */
    return bit;
}

