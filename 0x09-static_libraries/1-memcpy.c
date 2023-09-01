#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we copy to
 * @src: what to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
