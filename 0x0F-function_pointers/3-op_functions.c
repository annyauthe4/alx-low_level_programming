#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first number
 * @b: 2nd number
 * Return: int on success
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - Finds the difference between two integers
  * @a: First number
  * @b: 2nd number
  * Return: int on success
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies two integers
  * @a: first number
  * @b: 2nd number
  * Return: int on success
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - Divides 1st integer by the 2nd
  * @a: First number
  * @b: 2nd number
  * Return: int on success
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - Finds the modulus of one int by the other
  * @a: First num
  * @b: 2nd num
  * Return: int on success
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
