#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to array.
 * @accept: Pointer to array.
 *
 * Return: The size of the new string with i.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *content;

	while (*s != '\0')
	{
		content = accept;
		while (*content != '\0')
		{
			if (*s == *content)
			{
				i++;
				break;
			}
			content++;
		}
		if (*content == '\0')
			break;
		s++;
	}
	return (i);
}
