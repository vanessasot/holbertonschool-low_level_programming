#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of parameters.
 * @av: Pointer to a string.
 *
 * Return: Pointer with the new string.
 */

char *argstostr(int ac, char **av)
{
	int horizontal;
	int vertical;
	int tamano = 0;
	char *cadena;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (horizontal = 0; horizontal < ac; horizontal++)
	{
		for (vertical = 0; av[horizontal][vertical] != '\0'; vertical++)
		{
			tamano++;
		}
		tamano++;
	}
	tamano++;
	cadena = malloc(tamano * sizeof(char));
	if (cadena == NULL)
	{
		return (NULL);
	}
	tamano = 0;
	for (horizontal = 0; horizontal < ac; horizontal++)
	{
		for (vertical = 0; av[horizontal][vertical] != '\0'; vertical++)
		{
			cadena[tamano++] = av[horizontal][vertical];
		}
		cadena[tamano] = '\n';
		tamano++;
	}
	return (cadena);
}
