#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise it returns 0.
 * @n: Example of a number
 *
 * Return: 1 if the input integer is a prime number, 0 if otherwise.
 */

int is_prime_number(int n)
{
	int begin;

	begin = n / 2;

	if (n <= 1)
		return (0);

	return (is_prime(n, begin));
}

/**
 * is_prime - a function that returns 1 if n is a prime number
 * @n: Example of number
 * @begin: The number to begin from
 *
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */

int is_prime(int n, int begin)
{
	if (begin <= 1)
		return (1);
	else if (n % begin == 0)
		return (0);

	return (is_prime(n, begin - 1));
}
