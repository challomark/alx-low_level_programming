#include "variadic_functions.h"

/**
 * print_all - Print anything based on a format string
 * @format: A string containing format specifiers for the argument
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args; /* Declare a variable argument list */
	/* Initialize a string pointer & a separator to an empty string */
	char *string, *separator = "";

	va_start(args, format); /* Initialize the argument list */

	while (format && format[i]) /* Loop through the format string */
	{
		switch (format[i])
		{
			case 'c': /* Print a character, using the separator if needed */
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i': /* Print an integer, using the separator if needed */
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f': /* Print a float, using the separator if needed */
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's': /* Get the next argument as a string */
				string = va_arg(args, char *);
				if (string == NULL)
					/* Print "(nil)" for NULL strings, using the */
					/* separator if needed */
					printf("%s(nil)", separator);
				else
				{ /* Print the string, using the separator if needed */
					printf("%s%s", separator, string);
					break;
				}
			default:
				break; /* Ignore any other format specifiers */
		}
		separator = ", "; /* Set the separator for subsequent values */
		i++; /* Move to the next character in the format string */
	}

	va_end(args); /* Clean up the argument list */
	printf("\n"); /* Print a new line at the end to complete the output */
}
