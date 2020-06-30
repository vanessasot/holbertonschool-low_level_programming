#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: Element of array.
 * @size: Size of array.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size * size; i = i + size + 1)
	{
		sum += a[i];
	}
	printf("%d, ", sum);
	sum = 0;

	for (i = size - 1; i <= (size * size) - size; i = i + size - 1)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
}
