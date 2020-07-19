#include "variadic_functions.h"

/**
 * print_char - Prints chars.
 * @arg: Arguments.
 *
 * Return: Nothing.
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints integers.
 * @arg: Arguments.
 *
 * Return: Nothing.
 */

void print_int(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * print_float - Prints floats.
 * @arg: Arguments.
 *
 * Return: Nothing.
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints strings.
 * @arg: Arguments.
 *
 * Return: Nothing.
 */

void print_string(va_list arg)
{
	char *_string;

	_string = va_arg(arg, char *);
	if (_string == NULL)
		_string = "(nil)";
	printf("%s", _string);
}

/**
 * print_all - Prints anything.
 * @format: List of types of arguments.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	f_types ptypes[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list arg;
	unsigned int i;
	unsigned int j;
	char *separator;

	separator = "";

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ptypes[j].print != NULL)
		{
			if (format[i] == ptypes[j].type[0])
			{
				printf("%s", separator);
				ptypes[j].print(arg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}

