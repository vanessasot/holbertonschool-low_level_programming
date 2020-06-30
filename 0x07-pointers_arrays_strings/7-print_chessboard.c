#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Element of array.
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar((*a)[j]);
		}
		putchar('\n');
		a++;
	}
}
