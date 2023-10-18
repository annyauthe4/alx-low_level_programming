#include "main.h"

/**
 * _strcpy - copies a string including \0
 * @dest: pointer to return
 * @src: source to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
