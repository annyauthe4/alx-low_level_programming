#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to newly allocated memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int len;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		return (NULL);
	else if (s2 == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	for (i = 0; i != '\0'; i++)
	{
		s1[len] = s2[i];
	}
	s1[len] = '\0';
	arr = (char *)malloc(len);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
	{
		arr[i] = s1[i];
	}
	return (arr);
}
