#include <stdio.h>

/**
  * main - Computes and prints the sum of all the multiples
  * of 3 and 5 less than 1024
  *
  * Return: Always zero on success
  */
int main(void)
{
	int i, sum;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
