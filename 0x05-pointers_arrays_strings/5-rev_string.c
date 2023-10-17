#include "main.h"

/**
 * rev_string - prints revese strings
 * @s: pointer
 *
 * Return: pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = lenght - 1; i >= 0; i--)
	{
		return (s[i]);
	}
}
