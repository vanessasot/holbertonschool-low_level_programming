#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number
 * @index: Position of the number.
 *
 * Return: Value of the bit or -1 if an error occured..
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp;
	unsigned int size;

	temp = n;

	if (index > 63)
		return (-1);
	for (size = 0; temp > 0; size++)
		temp = temp >> 1;
	size--;
	if (index > size)
		return (-1);
	return (1 & (n >> index));
}
