#include "main.h"

/**
 * check - checks for the square root
 * @p: integer
 * @q: integer
 * Return: integer
 */
int check(int p, int q)
{
	if (p * p == q)
	{
		return (p);
	}
	if (p * p > q)
	{
		return (-1);
	}
	return (check(p + 1, q));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: integer to calculate
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
