#include "holberton.h"

/**
 * print_square - Prints a square.
 * @size: Size of the square..
 */

void print_square(int size)
{
	int fila;
	int columna;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (columna = 0; columna < size; columna++)
	{
		for (fila = 0; fila < size; fila++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
