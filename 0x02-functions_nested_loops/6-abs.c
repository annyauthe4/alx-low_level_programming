#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @x: The integer to check.
 *
 * Return: x
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}
