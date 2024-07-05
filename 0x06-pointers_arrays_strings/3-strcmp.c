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
	int i, diff;

	i = 0;
	diff = 0;
	while (1)
	{
		diff = s1[i] - s2[i];
		if (diff != 0 || s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (diff);
}
