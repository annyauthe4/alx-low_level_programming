#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previously allocated meomory
 * @old_size: size in byte for ptr
 * @new_size: size in byte for the new memory block
 *
 * Return: pointer to new memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr, *old_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (arr);
	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
	{
		arr[i] = old_ptr[i];
	}
	free(ptr);
	return (arr);
}
