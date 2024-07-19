#include "main.h"


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
	unsigned int size;
	void *arr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (arr);
	size = (old_size < new_size) ? old_size : new_size;
	memcpy(arr, ptr, size);

	free(ptr);
	return (arr);
}
