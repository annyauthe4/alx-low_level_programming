#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins to make change
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, coins, num_coins;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = 0;
	for (i = 0; i < 5; i++)
	{
		while (coins >= cent[i])
		{
		       coins-= cent[i];
		       num_coins++;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
