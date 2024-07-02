#include "main.h"

/**
  * _atoi - Converts a string to an integer
  * @s: Pointer to string
  *
  * Return: integer
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started = 0;

	while(*s)
	{
		if (*s == '-' && !started)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			if (result > (2147483647 - (*s - '0')) / 10)
			{
				return ((sign == 1) ? 2147483647 : -2147483647);
			}
			result = result * 10 + (*s - '0'); 
		}
		else if (started)
		{
			break;
		}
		s++;

		return (sign * result);
	}
	int _putchar(char c);
}
