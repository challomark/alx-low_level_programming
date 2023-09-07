#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings, with the first n bytes
 * of s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL
 * on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result; /* Pointer to store the concatenated string */
	unsigned int length1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int length2 = (s2 != NULL) ? strlen(s2) : 0;
	/* Length of s1 and s2, 0 if NULL */

	if (n >= length2) /* Ensure n doesn't exceed the length of s2 */
		n = length2;

	result = malloc(length1 + n + 1);
	/* Allocate memory for the concatenated string */
	/* +1 for the null terminator */

	if (result == NULL) /* Check if malloc failed */
		return (NULL);

	if (s1 != NULL) /* If s1 is not NULL, copy it to the result */
		strcpy(result, s1);
	else
		result[0] = '\0';
	/* If s1 is NULL, initialize the result as an empty string */

	strncat(result, s2, n);
	/* Concatenate the first n characters of s2 to the result */
	return (result); /* Return a pointer to the concatenated string */
}
