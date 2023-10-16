#include "main.h"

/**
 * _strlen - returns the length if a string
 * @s: the ponter to the string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
