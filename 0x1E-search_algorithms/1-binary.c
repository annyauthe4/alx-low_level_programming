#include "search_algos.h"

/**
 * print_array - Prints the current portion of the array being searched
 * @array: Pointer to the array
 * @low: The starting index of the portion
 * @high: The ending index of the portion
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
/**
  * binary_search - Searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: Pointer to the first element in the array.
  * @size: The number of elements in array.
  * @value: The value to search for.
  *
  * Return: The value or -1 if not found.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL || size == 0)
		return (-1);

	low = 0, high = size - 1;
	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
