#include "main.h"

/**
  * _strlen - Counts string length
  * @str: Pointer to a string.
  * Return: number of characters count.
  */
int _strlen(char *str)
{
	int count;

	count = 0;
	if (str == NULL)
		return (count);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
