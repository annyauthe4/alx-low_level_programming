#include <stdio.h>

/**
  * main - Prints first 50 fibonacci series
  *
  * Return: Always 0 on success
  */
int main(void)
{
	int i;
	unsigned long a, b, sum;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%lu", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
