#include "variadic_functions.h"

/**
 * print_numbers - Print numbers separated by a separator
 * @separator: The string to be printed between numbers (can be NULL)
 * @n: The number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i; /* Declare variable for iteration */
	va_list args; /* Declare a variable argument list */

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++) /* Iterate through the variable arguments */
	{
		num = va_arg(args, int); /* Get the next integer argument */

		printf("%d", num); /* Print the integer */

		/* Check if the separator is not NULL and if it's not the last number */
		if (separator != NULL && i < n - 1)
			printf("%s", separator); /* Print the separator */
	}

	va_end(args); /* Clean up the argument list */

	printf("\n"); /* Print a new line at the end */
}
