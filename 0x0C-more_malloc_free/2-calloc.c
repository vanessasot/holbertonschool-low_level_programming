#include "holberton.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Size of space to allocate.
 * @size: Size of bytes of the type of variable.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	pointer = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}

