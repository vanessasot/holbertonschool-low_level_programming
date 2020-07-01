#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to character.
 *
 */

void _print_rev_recursion(char *s)
{
	if (*(s) == '\0')
        {
                return;
        }
	if (*(s) != '\0')
	{
		_print_rev_recursion(++s);
	}
	_putchar (*--s);
}
