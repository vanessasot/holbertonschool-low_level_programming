#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: Value to find absolute value
 * Return: 0 success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n * n) / n;

		return (n);
	}
	else if (n > 0)
	{
		n = +(n * n) / n;

		return (n);
	}
	else
	{
		return (0);
	}
}
