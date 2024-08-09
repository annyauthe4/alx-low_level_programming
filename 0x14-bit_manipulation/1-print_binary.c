#include "main.h"

/**
  * print_binary - Prints binary
  * @n: The number to print its binary
  *
  * Return: Binary on success or 0 if failed.
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int first_one;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	first_one = 0;
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			first_one = 1;
		}
		else if (first_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!first_one)
	{
		_putchar('0');
	}
}
