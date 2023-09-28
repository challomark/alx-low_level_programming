#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int number = 1;
	/* create a char pointer to access individual bytes of number */
	char *bytes = (char *)&number;

	if (*bytes == 1)
	{
		/* the least significant byte is 1, indicating a little-endian system */
		return (1);
	}
	else
	{
		/* the most significant byte is 1, indicating a big-endian system */
		return (0);
	}
}
