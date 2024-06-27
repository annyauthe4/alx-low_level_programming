#include <stdio.h>

/**
  * main - Prints 1 to 100, fizz for multiples of 3, buzz
  * for multiples of five and fizzbuzz for multiples of the two
  *
  * Return: 0 on success.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			if (i != 100)
				printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
