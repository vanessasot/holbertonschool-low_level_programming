#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to array.
 * @b: Element of array.
 * @n: Count size of array.
 *
 * Return: The value in the pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
