#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: String between parameters.
 * @n: Number of parameters.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments_list;
	unsigned int i;
	char *_string;

	va_start(arguments_list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		_string = va_arg(arguments_list, char *);
		if (_string == NULL)
			printf("(nil)");
		if (i < n - 1)
		{
			printf("%s%s", _string, separator);
		}
		else
			printf("%s", _string);
	}
	printf("\n");
	va_end(arguments_list);
}
