#include "holberton.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to array.
 * @src: Pointer to array.
 * @n: Variable int.
 *
 * Return: The value in the pointer devuelve.
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont_cadena = 0;
	char *devuelve = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (cont_cadena < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		cont_cadena++;
	}
	*dest = '\0';
	return (devuelve);
}
