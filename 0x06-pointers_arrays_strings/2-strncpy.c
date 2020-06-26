#include "holberton.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to array.
 * @src: Pointer to array.
 * @n: Variable int.
 *
 * Return: The value in the pointer devuelve.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
