#include <stdio.h>

/**
 * main - counts number of argc
 * @argc: argument count
 * @argv: argument vector, an array of char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
