#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory space
 * @str: pointer to a string
 *
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	char **new_str = &str;
	unsigned int i;

	arr = (char *)malloc(**new_str * sizeof(char));
	if (arr == NULL)
		return (NULL);
	if (**new_str == NULL)
		return (NULL);
	for (i = 0; i < '\0'; i++)
	{
		if (arr[i] < *new[i])
			return (NULL);
		arr[i] = *new_str[i];
	}
	return (arr);
	free(arr);
}
