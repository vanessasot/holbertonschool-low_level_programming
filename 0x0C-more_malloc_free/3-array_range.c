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
	pointer = malloc((max - min + 1) * sizeof(int));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		pointer[i] = min + i;
	}
	return (pointer);
}

