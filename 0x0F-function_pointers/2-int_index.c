#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison
 * function
 * @array: The pointer to the integer array
 * @size: The number of elements in the array
 * @cmp: The pointer to the comparison pointer
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches or size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* Check if 'array' and 'cmp' are not NULL and if 'size' is */
	/* greater than 0 */
	if (array != NULL && cmp != NULL && size > 0)
	{
		/* Iterate through the elements of the array */
		for (i = 0; i < size; i++)
		{
			/* Use the comparison function 'cmp' to check the element */
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1); /* Return -1 if no element matches or 'size' <= 0 */
}
