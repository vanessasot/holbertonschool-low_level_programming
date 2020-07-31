#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Number
 * @index: Position of the number.
 *
 * Return: 1 if it worker or -1 if an error occured..
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
