#include "holberton.h"

/**
 * print_binary - Converts a binary number to an unsigned int.
 * @b: Binary number
 *
 * Return: Address of the new node.
 */

void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int aux = n;

	for (count = 0; aux > 0; count++)
		aux = aux >> 1;
	if (n == 0)
		_putchar('0');
	for (count--; count >= 0; count--)
	{
		if (1 & (n >> count))
			_putchar('1');
		else
			_putchar('0');
	} 
}
