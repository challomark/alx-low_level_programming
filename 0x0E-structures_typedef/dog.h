#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <string.h>

/**
 * struct dog - A new type struct describing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - The typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
