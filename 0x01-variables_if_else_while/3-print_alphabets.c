#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int p = 65;

	while (i < 123 || p < 91)
	{
		if (i < 123)
		{
			putchar(i);
			i++;
		}
		if ((i == 122) && p < 91)
		{
			putchar(p);
			p++;
		}
	}
	putchar('\n');
	return (0);
}
