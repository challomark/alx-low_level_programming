#include "main.h"
#include <stdlib.h>

int count_characters(char *s1);
int count_characters(char *s2);

/**
 * str_concat - a function that concatenates two strings
 * @s1: the destination string
 * @s2: the string to be added to s1
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of string1, followed by the contents of
 * s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0, total_length = 0, length1 = 0, length2 = 0;
	char *result;

	/* Calculate the lengths of s1 and s2 */
	length1 = count_characters(s1);
	length2 = count_characters(s2);

	/* Calculate the total length needed for the result string */
	total_length = length1 + length2 + 1;

	/* Allocate memory for the result string */
	result = (char *)malloc(total_length * sizeof(char));

	/* Check if memory allocation was successful */
	if (result == NULL)
		return (NULL);

	i = 0;
	/* Copy characters from s1 to s2 */
	{
		for (i = 0; i < length1; i++)
		{
			result[i] = s1[i];
		}
	}

	/* Copy characters from s2 to the result string */
	if (s2 != NULL)
	{
		for (; i < total_length; i++)
		{
			result[i] = s2[j];
			j++;
		}
	}

	/* Add a null-terminator to the end of the result string */
	result[total_length - 1] = '\0';

	/* Return a pointer to the newly allocated memory containing */
	/* the concatenated string */
	return (result);
}

/**
 * count_characters - counts the number of characters in a string
 * @s: the string to be counted
 *
 * Return: the number of characters as an in, returns 0 if string is NULL
 */


int count_characters(char *s)
{
	int i;
	int count = 0;

	/* Check if the input string is not NULL */
	if (s != NULL)
	{
		/* Iterate through the string to count characters until */
		/* the null-terminator is found */
		for (i = 0; s[i] != '\0'; i++)
		{
			count++;
		}
	}

	/* Return the count of characters */
	return (count);
}
