#include "main.h"

/**
  * print_diagonal - Prints diagonal on the terminal
  * @n: The number of times the diagonal should be printed
  * Return: void
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i + 1; j++)
		{
			_putchar(j < i + 1 ? ' ' : '\\');
		}
		_putchar('\n');
	}
}
