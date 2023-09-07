#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to
 * max (inclusive)
 * @min: The minimum value to start the array
 * @max: The maximu value to end the array
 *
 * Return: A pointer to the newly created array, or NULL on
 * failure
 */

int *array_range(int min, int max)
{
	int *array; /* Pointer to store the newly created array */
	int size, i;

	if (min > max)
		return (NULL); /* Return NULL if min is greater than max */

	size = max - min + 1; /* calculate the size of the array */

	array = malloc(size * sizeof(int)); /* Allocate mem for the array */

	if (array == NULL)
		return (NULL); /* Return NULL if malloc fails */

	/* Populate the array with values from min to max (inclusive) */
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	/*Return a pointer to the newly created and populated array */
	return (array);
}
