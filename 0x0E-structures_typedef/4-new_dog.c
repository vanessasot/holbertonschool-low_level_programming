#include "dog.h"

/**
 * new_dog - Function that creates.
 * @name: Pointer to array.
 * @age: Number of age.
 * @owner: Pointer to array.
 *
 * Return: Pointer to struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, a, b;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	for (j = 0; owner[j] != '\0'; j++)

	d->name = malloc(i + 1 * sizeof(char *));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(j + 1 * sizeof(char *));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	for (a = 0; a < (i + 1); a++)
	{
		d->name[a] = name[a];
	}
	for (b = 0; b < (j + 1); b++)
	{
		d->owner[b] = owner[b];
	}
	return (d);
}
