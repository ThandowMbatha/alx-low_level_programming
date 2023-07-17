#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes a variable of type struct for a dog
 * @d: a pointer to struct of a dog to initialize
 * @name: name for the do to initialize
 * @age: age of the dog to initialize
 * @owner: owner of the dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
