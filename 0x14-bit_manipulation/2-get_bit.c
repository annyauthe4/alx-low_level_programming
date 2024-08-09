#include "main.h"

/**
  * get_bit - Gets bit at certain index
  * @n: The number to get its bit
  * @index: The position of the bit
  * Return: The bit or -1 if error.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	return(((n & mask) != 0) ? 1 : 0);
}
