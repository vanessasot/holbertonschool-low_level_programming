#include "holberton.h"
/**
 * times_table - Prints the 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, x, y, z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;
			y = x / 10;
			z = x % 10;
			if (x > 9)
			{
				if (i > 0 && i > 9)
				{
					_putchar(' ');
				}
				_putchar(y + '0');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				if (j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
	}
}
