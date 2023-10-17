#include "main.h"

/**
 * print_rev - prints strings in reverse order
 * @s: pointer
 *
 * Return: rev_order
 */
void print_rev(char *s)
{
	while ('\0' > *s && *s >= 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
