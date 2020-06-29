#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Element of array.
 * @c: Element to localize.
 *
 * Return: The value in the pointer s.
 */

char *_strchr(char *s, char c)
{
	while (*s != (char) c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return ((char *)s);
}
