#include "holberton.h"

/**
 * print_triangle - Prints a triangle.
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int n1;
	int n2;
	int i;

	i = size;

	if (size > 0)

		for (n1 = 0; n1 < size; n1++)
		{
			i--;
			for (n2 = 0; n2 < size; n2++)
			{
				if (n2 < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
