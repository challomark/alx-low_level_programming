#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a provided function
 * @name: The name to be printed
 * @f: A function pointer to a function that prints char*
 */

void print_name(char *name, void (*f)(char *))
{
	/* Check if both 'name' and the function pointer 'f' are */
	/* not null */
	if (name != NULL && f != NULL)
	{
		/* Call provided function 'f' with the 'name' as argument */
		f(name);
	}
}
