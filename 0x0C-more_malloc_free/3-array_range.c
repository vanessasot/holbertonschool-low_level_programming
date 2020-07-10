#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 * @min: Inicial value.
 * @max: Last value.
 *
 * Return: Pointer to the allocated memory.
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
	}
	pointer = malloc(i * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		pointer[i] = i;
	}
	return (pointer);
}

