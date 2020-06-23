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
	while (*s != '\0')
	{
		s++;
		cont++;
	}
	for (rev = cont; rev >= 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
