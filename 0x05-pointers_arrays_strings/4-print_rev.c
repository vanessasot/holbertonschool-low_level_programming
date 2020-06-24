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
	rev = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	rev = cont;
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}
	_putchar('\n');
}
