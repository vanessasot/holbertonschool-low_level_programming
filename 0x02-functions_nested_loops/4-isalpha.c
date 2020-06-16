#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to check.
 * Return: 0 success
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
