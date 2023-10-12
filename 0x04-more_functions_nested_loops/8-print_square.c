#include "main.h"

/**
 * print_square - Function that prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int row, col,

	if (size > 0)
	{
		for  (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
