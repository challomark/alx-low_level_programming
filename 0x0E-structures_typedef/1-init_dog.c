#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog variable
 * @d: The pointer to the struct dog variable to be initialized
 * @name: The pointer to a char array containing the nameof the dog
 * @age: The age of the dog
 * @owner: The pointer to a char array containing the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the pointer to the struct is not NULL before initializing */
	if (d != NULL)
	{
		/* Initialize the struct members with the provided values */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
