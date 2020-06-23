#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Compare the length of the string.
 *
 * Return: String length.
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	return (cont);

}
