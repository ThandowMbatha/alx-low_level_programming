#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct for a dog
 * @d: struct of a dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
