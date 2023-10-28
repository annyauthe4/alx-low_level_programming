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
	int i, cent, coins, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent[] = {25, 10, 5, 2, 1};
	coins = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		num_coins = 0;
		while (cent >= coins[i])
		{
			cent -= coins[i];
			num_coins++;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
