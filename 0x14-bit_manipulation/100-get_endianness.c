#include "main.h"

/**
  * get_endianness - Checks the endianness of a system
  * if the system stores the least significant byte in the
  * smallest memory address i.e Little endianness.
  * If the most significant byte(MSB) is stored at the
  * smallest memory address, that is BIG ENDIANNESS.
  *
  * Return: 0 if big endian, 1 if little endian.
  */
int get_endianness(void)
{
	unsigned int i;
	char *ptr;

	i = 1;
	ptr = (char *)&i;
	if (*ptr)
		return (1);
	else
		return (0);
}
