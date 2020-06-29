#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Element of array.
 * @accept: Pointer to array.
 *
 * Return: The value in the pointer s.
 */

char *_strpbrk(char *s, char *accept)
{
	char *content;

	while (*s != '\0')
	{
		content = accept;
		while (*content != '\0')
		{
			if (*s == *content)
			{
				return (s);
			}
			content++;
		}
		s++;
	}
	return (0);
}
