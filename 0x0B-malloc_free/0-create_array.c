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
	char *mark;
	unsigned int i;

	if (size == 0)
		return (NULL);
	mark = malloc(sizeof(char) * size);
	if (mark == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		mark[i] = c;
		i++;
	}
	return (mark);
}
