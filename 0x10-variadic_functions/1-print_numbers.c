#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: String between numbers.
 * @n: Number of parameters.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments_list;
	unsigned int i;
	int number;

	va_start(arguments_list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		number = va_arg(arguments_list, int);
		if (i < n - 1)
		{
			printf("%d%s", number, separator);
		}
		else
			printf("%d", number);
	}
	printf("\n");
	va_end(arguments_list);
}
