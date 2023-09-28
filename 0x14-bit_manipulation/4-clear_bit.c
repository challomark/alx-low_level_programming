#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	/* check if the index is out of range (greater than 63) */
	if (index > 63)
		return (-1);

	/* create a bitmask by left-shifting 1 to the specified index */
	a = 1 << index;
	/* check if the bit at the specified index is currently set (1) */
	if (*n & a)
		*n ^= a; /* toggle the bit to 0 */

	return (1); /*return 1 to indicate success */
}
