#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog and initializes its attributes
 * @name: The pointer to a string containing the dog's name
 * @age: The age of the dog
 * @owner: The pointer to a string containing the owner's name
 *
 * Return: The pointer to the newly created dog., or NULL if memory
 * allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory for the new dog */
	dog_t *newDog = malloc(sizeof(dog_t));

	/* Check if memory allocation was successful */
	if (newDog == NULL)
		return (NULL);

	/* Dynamically allocate memory for name and owner and copy the values */
	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	/* Check if memory allocation and copying were successful */
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		/* Free allocated memory if there was an error and return NULL */
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	newDog->age = age; /* Initialize the age of the new dog */

	return (newDog); /* Return a pointer to the newly created dog */
}

