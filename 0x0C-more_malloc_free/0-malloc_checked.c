#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - writes a function that allocates memory
 * @b: number of integer to enter
 *
 * Return: pointer to array or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b * sizeof(unsigned int));
	if (arr == NULL)
		exit(98);
	return (arr);
}
