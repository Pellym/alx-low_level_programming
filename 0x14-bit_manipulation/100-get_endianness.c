#include "main.h"
/**
 * get_endianness - checks the endianness of the machine.
 *
 * Return: 0 if big-endian, 1 if little-endian.
 */
int get_endianness(void)
{
	unsigned int i = 1; /* Create an unsigned integer with the value 1 */

	char *c = (char *) &i; /* Cast the integer to a pointer to a character */

	/* If the first byte of the integer is 1, the machine is little-endian */

	if (*c)
		return (1); /* little-endian */

	else
	{
		return (0); /* big-endian */
	}
}
