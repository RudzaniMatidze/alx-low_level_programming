#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameter passed to the function
 * @n: nmber of argument passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int d;

	va_list holder;

	va_start(holder, n);

	for (d = 0; d < n; d++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
