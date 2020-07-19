#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: Result of the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments_list;
	int sum = 0;
	unsigned int i;

	va_start(arguments_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments_list, unsigned int);
	}
	va_end(arguments_list);

	return (sum);
}
