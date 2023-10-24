#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integer
 * @a: pointer to array name
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the secondary diagonal: %d\n", sum2);
}
