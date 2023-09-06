#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int a, b, length = 0, total_length = 0;
	char *str;

	/* Check for invalid input */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length of the concatenated string */
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			length++; /* Count characters in current argument */
		total_length += length + 1; /* Add the argument length */
		/* plus 1 for new line */
		length = 0; /* Reset the length for the next argument */
	}
	/* Allocate memory for the concatenated string */
	str = malloc(total_length + 1); /* +1 for the null terminator */
	/* Check if memory allocation failed */
	if (str == NULL)
		return (NULL);
	/* Concatenate the arguments with new line characters */
	length = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[length] = av[a][b]; /* Copy characters from */
			/* arguments to str */
			length++;
		}
		str[length] = '\n'; /* Add a new line character */
		length++;
	}

	str[length] = '\0'; /* Null-terminate the concatenated string */

	return (str); /* Return a pointer to the concatenated string */
}
