#include "main.h"

/**
 * puts2 - prints other character in a string
 * @str: string to be treated
 *
 * Return: void
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
