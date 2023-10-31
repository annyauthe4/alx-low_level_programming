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
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++
	}
	arr = (char *)malloc(len1 + len2 + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		arr[len1 + i] = s2[i];
	}
	arr[len1 + len2] = '\0';
	return (arr);
}
