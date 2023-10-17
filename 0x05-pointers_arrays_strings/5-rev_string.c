#include "main.h"

/**
 * rev_string - prints revese strings
 * @s: pointer
 *
 * Return: pointer
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		int now;

		now = s[start];
		s[start] = s[end];
		s[end] = now;
		start++;
		end--;
	}
}
