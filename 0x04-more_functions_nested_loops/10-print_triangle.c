#include "main.h"

/**
  * print_triangle - Prints triangle
  * @size: The size of the triangle to be printed
  * Return: void
  */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
