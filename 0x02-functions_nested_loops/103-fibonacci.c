#include <stdio.h>

/**
  * main - Finds and prints the sum of the even-valued terms in fibonacci
  * series less than 4, 000, 000
  *
  * Return: Always 0 on success
  */
int main(void)
{
	unsigned long a, b, sum, even_sum;

	a = 1;
	b = 2;
	even_sum = b;
	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			even_sum += sum;

		a = b;
		b = sum;
	}
	printf("%lu\n", even_sum);

	return (0);
}
