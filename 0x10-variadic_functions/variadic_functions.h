#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/* Standard Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct format_types - Struct format
 *
 * @type: Arguments
 * @print: The function associated
 */

typedef struct format_types
{
	char *type;
	void (*print)(va_list);
} f_types;

/* Prototypes */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif /* VARIADIC_FUNCTIONS */
