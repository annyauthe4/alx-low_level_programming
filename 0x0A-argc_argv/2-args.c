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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
