/* This program prints without using printf or puts. */
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
