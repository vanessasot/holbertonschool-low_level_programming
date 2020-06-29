#include "holberton.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to array.
 * @src: Element of array.
 * @n: Count size of array.
 *
 * Return: The value in the pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
