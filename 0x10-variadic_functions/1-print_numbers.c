#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: number of integer parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
