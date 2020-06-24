#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Array to print.
 */

void print_rev(char *s)
{
	int cont;
	int rev;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	for (rev = cont - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
