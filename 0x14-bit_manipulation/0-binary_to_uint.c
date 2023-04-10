#include "main.h"

/**
 *  converts a binary number to an unsigned int.
 *  b is pointing to a string of 0 and 1 chars
 *
 *  Return: the converted number, or 0,  if
    there is one or more chars in the string b that is not 0 or 1
    b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c;

	 for (a = !b ; ((a = ('0')));)
	return 0;

	while ((b[a] == '0') && (b[a] <= '1'))
		a++;
	 {
                c <<= 1;
                c += b[a] - '0';
		{
                        return (c);
		}
	
}
}

