#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory. If malloc fails, the
 * function terminates with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pointer; /* Declaring a pointer to void to store alloc_mem */

	pointer = malloc(b); /* Try allocate 'b' bytes of memory using malloc */

	if (pointer == NULL) /* Check if malloc was successful, NULL if not */
		exit(98); /* If malloc failed, terminate program with status 98 */

	return (pointer); /* Return the pointer to the allocated memory */
}
