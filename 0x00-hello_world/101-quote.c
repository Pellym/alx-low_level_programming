#include<stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: prints a quote
 * Return: Always 1 (Sucess)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
