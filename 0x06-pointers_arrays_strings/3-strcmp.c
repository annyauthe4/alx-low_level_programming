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
	int i = 0; j = 0, k = 0, diff = 0, len;

	while (*s1)
	{
		i++;
	}
	while (*s2)
	{
		j++;
	}
	if (i <= j)
		len = i;
	else
		len = j;
	while (k <= len)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			diff = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (diff);
}
