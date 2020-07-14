#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog.
 * @d: Pointer to struct.
 * @name: Pointer to name.
 * @age: Age of the dog.
 * @owner: Pointer to owner.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
