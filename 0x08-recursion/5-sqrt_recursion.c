#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number using recursion
 * @n: Example of a number
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(0, n));
}

/**
 * _sqrt - a function that returns the natural square root of a number
 * @n: Example of a number
 * @y: The squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int y)
{
	if (n > y / 2)
		return (-1);
	else if (n * n == y)
		return (n);

	return (_sqrt(n + 1, y));
}
