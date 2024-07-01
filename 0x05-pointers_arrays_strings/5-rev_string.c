#include "main.h"

/**
 * rev_string - prints revese strings
 * @s: pointer
 *
 * Return: pointer
 */
void rev_string(char *s)
{
	int i, j, k;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (k = 0, j = i - 1; k < j; k++, j--)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
	}
}
