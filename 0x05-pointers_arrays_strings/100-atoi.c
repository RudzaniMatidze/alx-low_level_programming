#include "main.h"

/**
 *  _atoi - Convert a string to an integer.
 *  @s: The string to convert.
 *
 *  Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + digit;
		s++;
	}

	return result * sign;
}
