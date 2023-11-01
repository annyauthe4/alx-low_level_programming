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
	int w;
	int j;

	grid = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(w * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}
}
