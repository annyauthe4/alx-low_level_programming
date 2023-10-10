#include "main.h"

/**
 * print_sign - prints sign if number is greater, less or = zero
 * @n: The integer to check.
 *
 * Return: 1, -1 and 0 if number is > 0, < 0 and = 0 respectively.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
