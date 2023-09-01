#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: The number of arguments given
 * @argv: The array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
	{
		printf("%s\n", argv[argument]);
	}

	return (0);
}
