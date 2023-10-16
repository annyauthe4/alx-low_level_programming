#include "main.h"

/**
 * _puts - prints string
 * @str: pinter to the string
 *
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
