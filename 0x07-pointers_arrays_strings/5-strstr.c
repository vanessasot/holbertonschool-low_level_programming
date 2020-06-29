#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Element of array.
 * @needle: Element to localize.
 *
 * Return: The value in the pointer haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle)
	{
		if (!*haystack++)
		{
			return (NULL);
		}
	}
	return ((char *)haystack);
}
