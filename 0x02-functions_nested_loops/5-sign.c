#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to validate.
 * Return: 0 success
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
