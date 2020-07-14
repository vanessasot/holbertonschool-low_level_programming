#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to struct.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	}
	free(d);
}
