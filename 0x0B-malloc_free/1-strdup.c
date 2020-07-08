#include "holberton.h"

/**
 * _strdup - Return a pointer to a newlly allocate space in memory..
 * @str: Pointer to a string.
 *
 * Return: Return value of malloc.
 */

char *_strdup(char *str)
{
	char *cadena;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	cadena = (char *) malloc((i + 1) * sizeof(char));
	if (cadena == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		cadena[j] = str[j];
		j++;
	}
	cadena[j] = '\0';
	return (cadena);
}
