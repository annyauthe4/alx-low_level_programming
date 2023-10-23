#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memeory area
 * @src: pointer to source memory area
 * @n: number of bytes to  memory
 *
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	char *dest_ptr = dest;
	char *src_ptr = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	return (dest);
}
