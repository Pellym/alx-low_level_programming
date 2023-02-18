#include <stdio.h>
/*
 * main - A programme that prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
