#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Swap the first value.
 * @b: Swap the second value.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
