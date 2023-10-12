#include "main.h"
/**
 * more_numbers - Print 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a, mult;

	for (mult = 0; mult <= 14; mult++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 > 0)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
