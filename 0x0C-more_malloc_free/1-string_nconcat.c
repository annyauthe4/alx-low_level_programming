#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: number of char from s2
 *
 * Return: pointer to array or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len, len2, i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	arr = malloc((len + 1 + n) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		arr[len + i] = s2[i];
	}
	arr[len + n] = '\0';
	return (arr);
}
