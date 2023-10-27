#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string one pointer
 * @s2: string two pointer
 *
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 != '\0')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
