#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line.
 * @n: Number of times the character.
 */

void print_diagonal(int n)
{
	int line, space;

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
