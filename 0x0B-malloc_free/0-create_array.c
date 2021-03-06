#include "holberton.h"

/**
 * create_array - Creates an array of chars.
 * @size: Size to array.
 * @c: Array.
 *
 * Return: Return value of malloc.
 */

char *create_array(unsigned int size, char c)
{
	char *arra;
	unsigned int i;

	arra = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (arra == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arra[i] = c;
		i++;
	}
	return (arra);
}
