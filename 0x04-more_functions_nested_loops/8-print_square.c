#include "main.h"

/**
  * print_square - Prints square
  * @size: The size of the square to be printed
  *
  * Return: void
  */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
