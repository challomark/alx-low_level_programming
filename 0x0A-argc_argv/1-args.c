#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: The number of arguments given
 * @argv: The array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
