#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to array.
 * @s2: Pointer to array.
 *
 * Return: The value in the pointer s1 - s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
