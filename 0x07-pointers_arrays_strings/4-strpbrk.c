#include "main.h"

/**
 * _strpbrk - searches a string for any set of byte
 * @s: the string to search
 * @accept: string to accept
 *
 * Return: pointer to s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
