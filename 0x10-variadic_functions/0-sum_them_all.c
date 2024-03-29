#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments passed
 * @...: arguments
 *
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total;
	va_list arg_count;

	va_start(arg_count, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(arg_count, int);
	}
	va_end(arg_count);
	return (total);
}
