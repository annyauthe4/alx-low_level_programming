#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-D memory allocated
 * @grid: pointer to a pointer to a grid
 * @height: column of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}
