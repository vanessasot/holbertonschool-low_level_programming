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
	unsigned int i;
	unsigned int a;
	unsigned int b;
	unsigned int ab;

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	ab = a + b;
	cadena = (char *) malloc((ab + 1) * sizeof(char));
	if (cadena == NULL)
		return (NULL);
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
