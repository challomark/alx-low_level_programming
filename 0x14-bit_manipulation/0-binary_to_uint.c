#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Program that converts a binary string to an
 * unsigned int.
 * @b: A pointer to the binary string
 *
 * Return: The number converted, or 0 if input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	/* check if the input string is NULL */
	if (b == NULL)
		return (0);

	unsigned int converted = 0; /* Initialize converted number to 0 */
	unsigned int power_two = 1; /* Initialize the power of two to 2^0 */
	int length = strlen(b); /* Get the length of the input string */
	int c;

	/* Iterate thru the characters in the string from right to left */
	for (c = length - 1; c >= 0; c--)
	{
		/* check if the character is not 0 or 1 */
		if (b[c] != '0' && b[c] != '1')
		{
			return (0); /* if invalid character */
		}

		/* if the character is 1, add the corresponding power of 2 */
		/* to result */
		if (b[c] == '1')
		{
			converted += power_two;
		}

		/* update the power of two for the next iteration */
		power_two *= 2;
	}

	return (converted); /* the final converted result */
}
