#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function given as parameter
 * @array: An array of functions
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
