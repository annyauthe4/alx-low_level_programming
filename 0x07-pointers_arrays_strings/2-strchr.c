#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to look for
 *
 * Return: the pointer to the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
