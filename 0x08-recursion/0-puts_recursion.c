#include "holberton.h"

/**
 * _puts_recursion - Prints a string.
 * @s: Pointer to character.
 *
 */

void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_putchar (*s);
		s++;
	}
	if (*(s) == '\0')
	{
		_putchar('\n');
	}
	if (*(s) != '\0')
	{
		_puts_recursion(s);
	}
}
