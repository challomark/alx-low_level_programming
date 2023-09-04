#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers followed by new line
 * @argc: The number of command line arguments
 * @argv: An array of command line argument
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int number, i, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (i = 0; argv[number][i]; i++)
		{
			if (argv[number][i] < '0' || argv[number][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
