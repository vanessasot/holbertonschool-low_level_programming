#include "holberton.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Array to print.
 */

void puts2(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			_putchar(str[cont]);
		}
		cont++;
	}
	_putchar('\n');
}
