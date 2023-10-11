#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @x: The integer to check.
 *
 * Return: x.
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = -x;
	x = x % 10;
	_putchar(x + '0');
	return (x);
}
