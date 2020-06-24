#include "holberton.h"

/**
 * puts_half - Prints half of a string.
 * @str: Array to print.
 */

void puts_half(char *str)
{
	int n1 = 0;
	int n2 = 0;

	while (str[n1] != '\0')
	{
		n1++;
	}
	if (n1 % 2 == 0)
	{
		n2 = n1 / 2;
	}
	else
	{
		n2 = (n1 / 2) + 1;
	}
	while (n1 >  n2)
	{
		_putchar(str[n2]);
		n2++;
	}
	_putchar('\n');
}
