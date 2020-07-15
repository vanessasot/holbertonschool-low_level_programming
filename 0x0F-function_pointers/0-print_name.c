#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to array.
 * @f: Pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
