#include "main.h"

/**
  * clear_bit - Clear bit at certain index
  * @n: Pointer to the bit to set to 0
  * @index: Position of the bit to set to 0
  * Return: 1 on success or -1 if error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
