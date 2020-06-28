#include "holberton.h"

/**
 * leet - Encodes a string into 1337.
 * @a: Pointer to array.
 *
 * Return: Value pointer.
 */

char *leet(char *a)
{
	int i;
	int j;
	int content;
	char b[10] = {'A', 'a', 'E', 'e', 'L', 'l', 'O', 'o', 'T', 't'};
	char c[5] = {'4', '3', '1', '0', '7'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == b[j])
			{
				content = j / 2;
				a[i] = c[content];
			}
		}
	}
	return (a);
}
