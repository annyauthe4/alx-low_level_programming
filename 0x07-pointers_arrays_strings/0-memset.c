#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory
 * @n: number of bytes to fill the memory
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
