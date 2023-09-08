#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block, or
 * NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr; /* Pointer to store the newly allocated memory block */

	if (new_size == old_size)
		return (ptr);
	/* If new_size is equal to old_size, do nothing and return ptr */

	if (ptr == NULL)
		return (malloc(new_size));
	/* If ptr is NULL, equivalent to malloc(new_size) */

	if (new_size == 0)
	{
		free(ptr); /* If new_size is zero, equivalent to free(ptr) */
		return (NULL);
	}

	new_ptr = malloc(new_size); /* Allocate memory for the new block */

	if (new_ptr == NULL)
		return (NULL); /* Return NULL if malloc fails */

	/*  Copy the contents of the old block to the new block, up to the */
	/* minimum of the old and new sizes */
	if (new_size < old_size)
		old_size = new_size;

	memcpy(new_ptr, ptr, old_size);

	free(ptr); /* Free the old block */

	return (new_ptr); /* Return a pointer to the newly allocated memory block */
}
