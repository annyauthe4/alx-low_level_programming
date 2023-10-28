#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1; num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
