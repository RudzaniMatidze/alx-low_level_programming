#include "main.h"
/**
 * _isdigit - Checks if numbers are 0 to 9
 * @c: number to be cheched.
 * Return: 1if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
