#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The number of command line arguments
 * @argv: An array of pointers to command line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents > 0)
		{
			cents -= 25;
			coins++;
		}

		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}

		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}

		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}

		else
		{
			cents -= 1;
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}

