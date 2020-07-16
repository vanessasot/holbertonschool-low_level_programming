#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Pointer to array.
 * @size: Size of array.
 * @cmp: Pointer to function.
 *
 * Return: Index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j, arry;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			arry = cmp(array[j]);
			if (arry > 0)
				return (j);
		}
	}
	return (-1);
}
