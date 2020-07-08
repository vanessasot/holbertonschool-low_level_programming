#include "holberton.h"

/**
 * alloc_grid - Concatenates two strings.
 * @width: Pointer to a string.
 * @height: Pointer to a string.
 *
 * Return: Return value of malloc.
 */

int **alloc_grid(int width, int height)
{
	int **solu;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	solu = malloc(height * sizeof(int *));
	if (solu == NULL)
		return (NULL);
	if (solu != '\0')
	{
		for (a = 0; a < height; a++)
		{
			solu[a] = malloc(width * sizeof(int));
			if (solu[a] == '\0')
			{
				for (; a >= 0; a--)
					free(solu[a]);
				free(solu);
				return ('\0');
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
			solu[a][b] = 0;
			}
		}
		return (solu);
	}
	return ('\0');
}
