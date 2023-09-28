#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped to get
 * from one number to another
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR the two numbers to find differing bits */
	unsigned long int xor_result = n ^ m;
	/* initialize counter for differing bits */
	unsigned int bits = 0;

	/* iterate through each bit in xor_result */
	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			bits++; /* if the current bit is 1, increment the count */
		}
		xor_result >>= 1; /* right-shift to check the next bit */
	}

	return (bits); /* return the count of differing bits */
}
