#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it
 * to zero
 * @nmemb: The number of elements in the array
 * @size: The size in bytes of each element
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 * or if nmemb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer; /* Pointer to store the allocated memory */
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL); /* NULL if nmemb or size is 0 */

	total_size = nmemb * size;
	/* Calculate the total size required for the array */

	pointer = malloc(total_size);
	/* Attempt to allocate memory for the array */

	if (pointer == NULL)
		return (NULL); /* If malloc fails */

	/* Initialize the allocated memory to zero using memset */
	/* This sets all bytes in the allocated memory block to zero */
	memset(pointer, 0, total_size);

	return (pointer); /* pointer to the allocated and initialized memory */
}
