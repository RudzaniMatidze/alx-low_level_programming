#include "main.h"
/**
 *print_sign - prints the sign of s number
 *
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n s zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if else (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
