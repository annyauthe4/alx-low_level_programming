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
	unsigned int len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
