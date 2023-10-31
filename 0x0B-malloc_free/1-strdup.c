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
	unsigned int i;

	arr = (char *)malloc(*str * sizeof(char));
	if (arr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i != '\0'; i++)
	{
		if (arr[i] < str[i])
			return (NULL);
		arr[i] = str[i];
	}
	arr[i] = '\0';
	free(arr);
	return (arr);
}
