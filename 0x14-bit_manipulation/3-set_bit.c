#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the unsigned long int to modify
 * @index: the index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	/* check if the index is out of range (greater than 63) */
	if (index > 63)
		return (-1);

	/* create a bitmask by left-shifting 1 to the specified index */
	a = 1 << index;
	/* set the bit at the specified index to 1 */
	*n = (*n | a);

	return (1); /* return 1 on success */
}
