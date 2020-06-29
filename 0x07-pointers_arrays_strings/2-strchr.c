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
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
		{
			return ((char *) s);
		}
	}
	return (NULL);
}
