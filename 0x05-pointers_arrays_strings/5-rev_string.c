#include "main.h"

/**
 * rev_string - prints revese strings
 * @s: pointer
 *
 * Return: pointer
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char *a;
	char p;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}
	for (i = 0; i < (j / 2); i++)
	{
		p = s[i];
		s[i] = *a;
		*a = p;
		a--;
	}
}
