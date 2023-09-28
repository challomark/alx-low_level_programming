#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: a pointer to the binary string
 *
 * Return: the converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /*initialize the result to 0 */
	unsigned int power_two = 1; /* initialize the power of two to 2^0 */
	int len = strlen(b); /* get the length of the input string */
	int a; /* for iteration */

	/* check if input string is NULL */
	if (b == NULL)
		return (0);

	/* iterate through the characters in the string from right to left */
	for (a = len - 1; a >= 0; a--)
	{
		/* check if the character is not '0' or '1' */
		if (b[a] != '0' && b[a] != '1')
			return (0); /* invalid character found, return 0 */

		/* if the character is '1', add the corresponding power of 2 to the result */
		if (b[a] == '1')
			result += power_two;

		/* update the power of two for the next iteration */
		power_two *= 2;
	}

	return (result); /* return the final converted result */
}
