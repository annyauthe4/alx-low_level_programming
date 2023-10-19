#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of string
 *
 * Return: a pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *new = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (new);
}
