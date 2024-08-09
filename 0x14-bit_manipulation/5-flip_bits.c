#include "main.h"

/**
  * flip_bits - Counts the difference(s) in bits of 2 numbers
  * @n: The integer to check
  * @m: The 2nd integer
  * Return: The number of count.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;
	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
