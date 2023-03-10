#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which consists
 * of only bytes from accept
 *
 * PSEUDOCODE
 * Loop through s and compare s[i]  to values in accept
 * increase bytes counter when values in accept can be found
 * in *s
 * End loop and return bytes when accept is exhausted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
