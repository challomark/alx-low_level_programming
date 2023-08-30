#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: An example of a number
 *
 * Return: the factorial of a number or -1 if the number is less than 0
 */

int factorial(int n)
{
	int result;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	result = factorial(n - 1);
	return (n * result);
}
