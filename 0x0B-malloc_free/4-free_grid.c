#include "holberton.h"

/**
 * free_grid - Free a 2 dimensional grid previously created.
 * @grid: Pointer to a string.
 * @height: Pointer to a string.
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
