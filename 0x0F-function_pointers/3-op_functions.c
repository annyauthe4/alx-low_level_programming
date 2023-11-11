#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first number
 * @b: 2nd number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of a division
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a % b);
}
