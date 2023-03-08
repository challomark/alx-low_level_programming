#include "main.h"
/**
 * helper - helps to decide if right
 * @i: number to square
 * @n: number to check square root of
 * Return: value of root
 */
int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - returns the square root
 * @n: integer to return
 * Return: the int of square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
