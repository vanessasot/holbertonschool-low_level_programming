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

	if (size == 0)
		return (NULL);

	arra = malloc((size + 1) * sizeof(c));
	if (arra == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arra[i] = c;
	arra[i] = '\0';
	return (arra);
}
