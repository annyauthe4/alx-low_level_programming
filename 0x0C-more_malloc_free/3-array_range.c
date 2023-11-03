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
	int *arr, i, j, num_element;

	if (min > max)
		return (NULL);
	num_element = (max - min) + 1;
	arr = malloc(num_element * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		arr[j] = i;
	}
	return (arr);
}
