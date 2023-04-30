#include "main.h"
#include <stdio.h>

/**
 *  prints the binary representation of a number.
 *
 *  @n: the number to be printed in binary
 *
 *  Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int mask = 1, msb = 0;

	msb = mask << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & msb) == 0)
			_putchar('0');
		else
			_putchar('1');
		msb = msb >> 1;
	}
	  msb = n & msb;
	  msb = msb >> (sizeof(unsigned long int) * 8 - 1);

	  printf("Number: %lu\n", n);
	  printf("MSB: %lu\n", msb);
	  printf("MSB: %lu\n", msb);

	  for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	  {
		  putchar((n & mask) ? '1' : '0');
		  n >>= 1;
	  }
	  putchar('\n');
}
