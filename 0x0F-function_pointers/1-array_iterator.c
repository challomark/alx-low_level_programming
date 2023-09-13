#include <stddef.h>

/**
 * array_iterator- Executes a function on each element of an array
 * @array: The pointer to the integer array
 * @size: The size of the array
 * @action: The pointer to the function to be executed on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	/* Check if 'array' and the function pointer 'action' are not NULL */
	/* and size is not less than zero */
	if (array != NULL && action != NULL && size > 0)
		/* Iterate through the elements of the array */
		for (i = 0; i < size; i++)
		{
			/* Call the function 'action' on each element */
			action(array[i]);
		}
}
