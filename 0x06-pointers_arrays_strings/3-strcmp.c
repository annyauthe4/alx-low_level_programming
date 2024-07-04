#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	diff = 0;
	while (diff == 0)
	{
		diff = *s1 - *s2;
		if (*s1 == '\0')
			break;
		s1++;
		s2++;
	}
	return diff;
}
