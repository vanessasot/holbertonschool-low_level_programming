#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @src: Pointer to array.
 *
 * Return: Value of src
 */
char *string_toupper(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}
