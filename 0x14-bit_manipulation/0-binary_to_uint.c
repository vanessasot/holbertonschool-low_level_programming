#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Binary number
 *
 * Return: Address of the new node.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int multiplicador = 1;
	int i;
	int len;
	char caracterActual;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		caracterActual = b[i];
		if (caracterActual == '1')
			dec += multiplicador;
		multiplicador = multiplicador * 2;
	}
	return (dec);
}
