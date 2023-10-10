#include "main.h"

/**
 * _islower - checks if c is lowercase alphabet
 * @c: The integer to print
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
