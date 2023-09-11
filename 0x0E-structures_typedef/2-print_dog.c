#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog
 * @d: The pointer to the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	/* Check if the pointer to the struct is not NULL */
	if (d != NULL)
	{
		/* Print the name or (nil) if name is NULL */
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		/* Print the age */
		printf("Age: %f\n", d->age);

		/* Print the owner or (nil) if owner is NULL */
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
