#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: number of grid rows
 * @height: number of grid column
 *
 * Return: pointer to the grid or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
