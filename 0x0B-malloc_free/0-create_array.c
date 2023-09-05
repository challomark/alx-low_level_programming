#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.4
 * @size: the size of the array
 * @c: The character to initialize the array with
 *
 * Return: a pointer to the allocated array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}
