#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that duplicates a string
 * @str: The string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int a, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[len] != '\0')
		len++;
	/* Allocate memory for the duplicate string */
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string into the duplicate */
	for (a = 0; a <= len; a++)
		duplicate[a] = str[a];

	return (duplicate);
}
