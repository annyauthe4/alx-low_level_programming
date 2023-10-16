#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: ponter a
 * @b: pinter b
 *
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
