#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters
 * @n: Number of perimeters
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0; /* Initialize a variable to hold the sum */
	unsigned int i; /* Declare variable for iteration */
	va_list args; /* Declare a va_list variable to handle variable arguments */

	va_start(args, n); /* Initialize the va_list with the variable arguments */
	/* Check if the number of parameters is zero */
	if (n == 0)
		return (0); /* If zero, return 0 as specified in the prototype */

	/* Iterate through the variable arguments and add them to the sum */
	for (i = 0; i < n; i++)
	{
		/* Get the next argument as an integer and add it to the sum */
		sum += va_arg(args, int);
	}

	va_end(args); /* Clean up the va_list after processing all arguments */
	return (sum); /* Return the final sum */
}
