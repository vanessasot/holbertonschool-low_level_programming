#include "holberton.h"

/**
 * _puts - Prints a string.
 * @str: Array to print.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
