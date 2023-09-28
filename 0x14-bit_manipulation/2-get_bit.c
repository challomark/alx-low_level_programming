#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the specified index, or -1
 * if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a; /* for iteration */

	/* check if n is 0 and the index is within the valid range (0 to 63) */
	if (n == 0 && index < 64)
		return (0); /* bit is 0 */

	/* iterate through each bit of n from right to left */
	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			/* return the value of the bit at the specified index */
			return (n & 1);
	}

	return (-1); /* invalid index (out of range) */
}
