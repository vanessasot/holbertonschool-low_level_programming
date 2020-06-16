#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * _putchar - Print the characters.
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int school[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 26 - 1; i++)
		{
			_putchar(school[i]);
		}
		_putchar('\n');
	}
}
