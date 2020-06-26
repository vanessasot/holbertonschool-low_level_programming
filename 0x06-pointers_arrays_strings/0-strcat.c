#include "holberton.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to array.
 * @src: Pointer to array.
 *
 * Return: The value in the pointer devuelve.
 */

char *_strcat(char *dest, char *src)
{
	int cont_cadena1 = 0;
	int cont_cadena2;

	while (dest[cont_cadena1] != '\0')
	{
		cont_cadena1++;
	}
	cont_cadena2 = 0;
	while (src[cont_cadena2] != '\0')
	{
		dest[cont_cadena1] = src[cont_cadena2];
		cont_cadena2++;
		cont_cadena1++;
	}
	return (dest);
}
