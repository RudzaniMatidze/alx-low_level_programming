#include "main.h"

/**
 * check_prime - checks for prime number
 * @f: integer to be checked
 * @g: integer times
 * Return: integer
 */
int check_prime(int f, int g)
{
	if (g < 2 || g % f == 0)
	{
		return (0);
	}
	else if (f > g / 2)
	{
		return (1);
	}
	return (check_prime(f + 1, g));
}

/**
 * is_prime_number - returns 1 if the int is a prime number,
 * otherwise return 0
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(2, n));
}
