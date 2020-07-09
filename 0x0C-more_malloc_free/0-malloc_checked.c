#include "holberton.h"

/**
 * malloc_checked - Fills memory with a constant byte.
 * @b: Size of space to allocate.
 *
 * Return: The value in the pointer s.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}

