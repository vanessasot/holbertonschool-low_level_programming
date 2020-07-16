#include "function_pointers.h"

/**
 * array_iterator - Given as a parameter on each element of an array.
 * @array: Pointer to array.
 * @size: Size of array.
 * @action: Pointer to function.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;
	
	if (action == NULL || array == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
