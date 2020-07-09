#include "holberton.h"

/**
 * string_nconcat - Concatenate two strings.
 * @s1: Pointer to string.
 * @s2: Pointer to string.
 * @n: Size of memory to allocate.
 *
 * Return: The value in the new pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cadena;
	unsigned int i, a, b, ab;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	for (b = 0; s2[b] != '\0'; b++)
	ab = a + b;
	cadena = (char *) malloc((ab + 1) * sizeof(char));
	if (cadena == NULL)
		return (NULL);
	if (n <= b)
	{
		i = 0;
		while (*s2 != '\0')
		{
			cadena[i] = *s2;
			s2++;
			i++;
		}
		cadena[i] = '\0';
		return (cadena);
	}
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

