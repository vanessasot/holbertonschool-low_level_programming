#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search algori
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: Value to search
 *
 * Return: If array is NULL or if value is not present in array return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
