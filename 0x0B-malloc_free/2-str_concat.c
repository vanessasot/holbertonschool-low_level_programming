#include "holberton.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to a string.
 * @s2: Pointer to a string.
 *
 * Return: Return value of malloc.
 */

char *str_concat(char *s1, char *s2)
{
	char *cadena;
	unsigned int ss1;
	unsigned int ss2;
	unsigned int s3;
	unsigned int i;

	ss1 = strlen(s1);
	ss2 = strlen(s2);
	s3 = ss1 + ss2 + 1;

	cadena = (char *) malloc(s3 * sizeof(char));
	i = 0;
	while (*s1 != '\0')
	{
		cadena[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		cadena[i] = *s2;
		s2++;
		i++;
	}
	cadena[i] = '\0';
	return (cadena);
}
