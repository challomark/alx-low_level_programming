#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int number1, number2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]); /* Convert the first argument to an integer */
	number2 = atoi(argv[2]); /* Convert the second argument to an integer */

	result = number1 * number2; /* Multiply the two numbers */

	printf("%d\n", result);

	return (0);
}
