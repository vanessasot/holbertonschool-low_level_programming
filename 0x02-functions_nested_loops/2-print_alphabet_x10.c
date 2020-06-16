#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122 - 1; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
