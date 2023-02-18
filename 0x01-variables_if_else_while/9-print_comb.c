#include <stdio.h>
/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; a < 100; n++)
	{
		putchar(n + '0');
		if (a < 99)
		{
			putchar(',');
			putchar('');
		}
	}
	printf('\n');
	return (0);
}
