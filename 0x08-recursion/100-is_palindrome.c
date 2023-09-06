#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Example of string to check
 *
 * Return: 1 if @s is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length = 0;
	int a, b;

	/* Check if the input string is NULL */
	if (s == NULL)
		return (0);

	/* Calculate the length of the input string */
	while (s[length] != '\0')
		length++;

	/* Compare characters from the beginning and end of the string */
	for (a = 0, b = length - 1; a < b; a++, b--)
	{
		/* If characters at positions a and b don't match... */
		/* it's not a palindrome */
		if (s[a] != s[b])
			return (0);
	}

	/* If we reach this point, the string is a palindrome */
	return (1);
}
