#include "main.h"
/**
 * set_bit - sets a bit to 1 at a given index in a number
 * @n: the number to modify
 * @index: the index of the bit to set to 1, starting from 0 for the least significant bit
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    /* Check if the index is valid for the given number */
    if (index >= sizeof(unsigned long int) * 8) {
        return (-1);
    }

    /* Use bitwise OR to set the bit at the given index to 1 */
    *n |= (1UL << index);

    /* Return success */
    return (1);
}
