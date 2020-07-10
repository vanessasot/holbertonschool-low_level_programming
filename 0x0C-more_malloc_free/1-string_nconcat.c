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
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n >= b)
		n = b;
	cadena = malloc(((a + n) + 1) * sizeof(char));
	if (cadena == NULL)
		return (NULL);
	c = 0;
	while (c < a)
	{
		cadena[c] = s1[c];
		c++;
	}
	d = 0;
	while (d < n)
	{
		cadena[c + d] = s2[d];
		d++;
	}
	cadena[c + d] = '\0';
	return (cadena);	
}

