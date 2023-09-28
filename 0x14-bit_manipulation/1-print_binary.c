#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	/* check if n is 0, in which case it has a single binary digit '0' */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
