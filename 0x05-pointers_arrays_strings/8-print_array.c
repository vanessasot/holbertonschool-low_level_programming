#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: string in reverse
 * @n: variable
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
