#include "variadic_functions.h"

/**
 * print_strings - Print strings separated by a separator
 * @separator: The string to be printed between strings (can be NULL)
 * @n: Number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list args; /* Declare a variable argument list */

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++) /* Iterate through the variable arguments */
	{
		string = va_arg(args, char *); /* Get the next string argument */

		if (string != NULL)
			printf("%s", string); /* Print the string if it's not NULL */
		else
			printf("(nil)"); /* Print "(nil)" if the string is NULL */

		/* Print the separator if it's not NULL and not the last string */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the argument list */

	printf("\n"); /* Print a new line at the end */
}
