#include "main.h"

/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	if (!(n == '2' || n == '4'))
	_putchar(n);
	}
	_putchar('\n');
}
