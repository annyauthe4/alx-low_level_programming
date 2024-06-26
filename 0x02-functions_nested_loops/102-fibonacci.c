#include "main.h"

/**
  * fibonacci - Prints first 50 fibonacci series
  *
  * Return: void
  */
void fibonacci(void)
{
	int a, b, i, result;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	printf("\n");
}
