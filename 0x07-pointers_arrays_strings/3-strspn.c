#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to entered string
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;
	char *a;

	k = 0;
	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				k++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (k);

}
