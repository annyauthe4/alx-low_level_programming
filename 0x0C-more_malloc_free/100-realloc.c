#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previously allocated meomory
 * old_size: size in byte for ptr
 * @new_size: size in byte for the new memory block
 *
 * Return: pointer to new memory block or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i, j;
	
	if (new_size > old_size)
		arr;
	if (new_size == old_size)
		return (ptr);
	ptr = malloc(old_size * sizeof(unsigned int));
	arr = malloc((old_size + new_size) * sizeof(unsigned int));
	if (arr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (arr);
	for (i = 0; i <= old_size; i++)
	{
		arr[i] = ptr[i];
	}
	for (j = 0; j <= new_size; j++)
	{
		arr[i + j] = j;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (arr);
}
