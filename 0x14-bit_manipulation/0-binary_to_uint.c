#include "main.h"

/**
  * binary_to_uint - Converts binary number to unsigned int num
  * @b: Pointer to the string of binary passed
  *
  * Return: The converted number if success or 0.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result <<= 1;

		if (*b == '1')
		{
			result += 1;
		}
		b++;
	}
	return (result);
}
