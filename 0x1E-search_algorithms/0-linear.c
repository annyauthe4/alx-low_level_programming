#include "search_algos.h"
/**
  * linear_search - Searches for a value in an array of integers.
  * @array: Pointer to the 1st element in the array
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: The value or -1 on failure
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
