#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 */

void more_numbers(void)
{
	int n, n1, n2, op, y, z;

	n2 = 1;

	for (n = 0; n < 10; n++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			op = n1 * n2;
			y = op / 10;
			z = op % 10;

			if (op > 9)
			{
				_putchar(y + '0');
				_putchar(z + '0');
			}
			else
			{
				_putchar(op + '0');
			}
		}
		_putchar('\n');
	}
}
