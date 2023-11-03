#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum vlaue of integer
 *
 * Return: pointer to a newly created array or NULL
 */
int *array_range(int min, int max);
{
	int *arr, i, j, range;

	if (min > max)
		return (NULL);
	i = min;
	while (i <= max)
	{
		range = min + 'max';
		i++;
	}
	arr = malloc(i * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		arr[j] = range;
	}
	return (arr);
}
