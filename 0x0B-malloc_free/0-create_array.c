#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: number of int to assign memory for
 * @c: characters to assign
 *
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;


	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
