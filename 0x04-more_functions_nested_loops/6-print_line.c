#include "holberton.h"

/**
 * print_line - Draws a straight line.
 * @n: Number of times the character.
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n <=  0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
