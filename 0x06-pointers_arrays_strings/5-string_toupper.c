#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @ptr: pointer to string
 *
 * Return: characters
 */
char *string_toupper(char *ptr)
{
	int i;
	
	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - ('a' - 'A');
		}
	}
	return (ptr);
}
