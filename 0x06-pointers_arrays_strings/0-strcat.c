#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: a pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len;
	int len2;
	int p;

	i = 0;
	while (*dest[i] <= '\0')
	{
		i++;
		dest++
	}
	len = i;
	j = 0;
	while (*src[j] <= '\0')
	{
		j++;
		src++;
	}
	len2 = j;
	for (p = 0; p <= len2; p++)
	{
		dest[i + p] = src[p];
		return (dest[i + p]);
	}
}
