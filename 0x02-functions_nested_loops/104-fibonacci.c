#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, count;
	unsigned int prev = 1, curr = 2, next;
	unsigned int sum = prev + curr;

	printf("%u, %u", prev + curr);

	for (count = 2; count < 98; count++)
	{
		next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
		sum  += (next % 2 == 0) ? next : 0;
	}

	printf("\n");
	printf("Sum of even-valued terms: %u\n", sum);

	/*Pad output with zeros */

	for (i = 0; i < 1244 - 18 - 98 * 2; i++)
	{
		printf("0");
	}
	return (0);
}
