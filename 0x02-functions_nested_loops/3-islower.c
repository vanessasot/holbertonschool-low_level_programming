#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to check.
 * Return: 0 success
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
