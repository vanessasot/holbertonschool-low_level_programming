#include "holberton.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: Variable to validate.
 *
 * Return: 1 if is true or 0 if is false.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
