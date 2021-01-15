#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: Value to search
 *
 * Return: If array is NULL or if value is not present in array return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0;
	size_t end = size - 1;
	size_t middle;
	size_t i;

	if (!array)
		return (-1);

	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		middle = (begin + end) / 2;

		if (array[middle] < value)
			begin = middle + 1;
		else if (array[middle] > value)
			end = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
