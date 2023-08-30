#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string example
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int strlen = 0; /* initialize the variable */

	if (*s != '\0')
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}

	return (strlen);
}
