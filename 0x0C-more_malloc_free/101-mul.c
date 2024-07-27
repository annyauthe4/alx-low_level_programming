#include "main.h"

/**
  * main - Multiplies two positive numbers
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 on success.
  */
int main(int argc, char *argv[])
{
	int i;
	char **arv;

	char c[] = "Error";
	if (argc != 3)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
		return (98);
	}
	if (argv[1] < 0 || argv[2] < 0 && argv[1] > 9 || argv[2] > 9)
	{

	}
}
