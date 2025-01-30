#include "search_algos.h"
#include <math.h>

/**
  * jump_search - Searches for a value in a sorted array of int
  * @array: Pointer to the first element of the array to search
  * @size: The number of element in array
  * @value: The value to search for.
  *
  * Return: value or -1 on failure.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, low, next;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	low = 0;
	while (array[(low + step < size ? low + step : size - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low += step;
		if (low >= size)
			return (-1);
	}
	next = low + step;
	printf("Value found between indexes [%lu] and [%lu]\n", low, next < size ? \
		next : size - 1);

	for (i = low; i < size && i <= low + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
