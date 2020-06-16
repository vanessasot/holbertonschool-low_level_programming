#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: Value to find the last digit of the number.
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
