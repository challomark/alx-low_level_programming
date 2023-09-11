#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: The pointer to the dog structure to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return; /* Check if the dog pointer is NULL */

	/* Free the dynamically allocated name and owner strings */
	free(d->name);
	free(d->owner);

	/* Free the memory for the dog structure itself */
	free(d);
}
