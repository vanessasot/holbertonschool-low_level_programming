#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints Holberton, followed by a new line.
 *
 * _putchar - Print the characters.
 *
 * Return: 0 success
 */
int main(void)
{
	int school[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');
	return (0);
}
