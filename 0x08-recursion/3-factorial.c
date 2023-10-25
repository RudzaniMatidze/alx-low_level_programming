#include "main.h"

/**
 * factorial - Returns the factor of a given number
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	int k;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		k = n * factorial(n - 1);
	}
	return (k);
}
