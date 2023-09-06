#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Example of string to check
 *
 * Return: 1 if @s is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	/* Initialize two pointers, one at the beginning */
	/* and one at the end of the string */
	char *start = s;
	char *end = s + strlen(s) - 1;

	/* Check if the input string is NULL */
	if (s == NULL || strlen(s) == 0)
		return (0);
	while (start < end)
	{
		/* If characters at the two pointers don't match */
		/* it's not a palindrome */
		if (*start != *end)
			return (0);
		/* Move the pointers towards each other */
		start++;
		end--;
	}
	/* If we reach this point, the string is a palindrome */
	return (1);
}
