#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memeory area
 * @src: pointer to source memory area
 * @n: number of bytes to  memory
 *
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
