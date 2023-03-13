#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array
 * @c: the char to be initialized with
 *
 * Return: the pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
