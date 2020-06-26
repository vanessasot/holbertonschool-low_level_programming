#include "holberton.h"

/**
 * _strcpy - Copies the string pointed to by src.
 *
 * @dest: Pointer to array.
 * @src: Pointer to array.
 *
 * Return: Value of dest.
 */

char *_strcpy(char *dest, char *src)
{
	int n;
	char content;

	for (n = 0; src[n] != '\0'; n++)
	{
		content = src[n];
		dest[n] = content;
	}
	dest[n] = '\0';
	return (dest);
}
