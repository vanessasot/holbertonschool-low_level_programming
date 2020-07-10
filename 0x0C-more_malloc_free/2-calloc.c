#include "holberton.h"

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Size of space to allocate.
 * @size: Size of bytes of the type of variable.
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; pointer[i] != '\0'; i++)
	{
		pointer[i] = 0;
	}
	return (pointer);
}

