#include "main.h"

/**
 * is_prime_number - returns prime number
 * @n: integer to checker
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else
		return (prime_search(n, 2));
}

/**
 * prime_search - helps search for prime numbers
 * @n: searched number
 * @divisor: the divisor
 *
 * Return: prime number
 */
int prime_search(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (prime_search(n, divisor + 1));
}
