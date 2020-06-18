#include "holberton.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			x = i * j;
			if (x < 10)
			{
				_putchar(' ');
			}
			else
			{
				y = x / 10;
				_putchar(y + '0');
			}
			y = x % 10;
			_putchar (y + '0');
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
