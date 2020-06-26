#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointe to array
 * @n: variable
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int content;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		content = a[i];
		a[i] = a[n];
		a[n] = content;
	}
}
