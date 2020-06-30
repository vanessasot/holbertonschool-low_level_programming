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
	while (*haystack)
	{
		char *pointer1 = needle;
		char *pointer2 = haystack;

		for (; *pointer1 == *pointer2 && *pointer1; pointer1++, pointer2++)
		{
		}
		if (*pointer1 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
