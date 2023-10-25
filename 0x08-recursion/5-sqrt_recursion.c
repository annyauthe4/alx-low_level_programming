#include "main.h"

/**
 * _sqrt_recursion - finds the swuare root of natural numbers
 * @n: integer to find its square root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_helper(n, 2));
}

/**
 * _sqrt_helper - helps find if a number is a perfect square
 * @n: integer whose integer we are searching
 * @guess: perfect square number
 *
 * Return: integer
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1));
}
