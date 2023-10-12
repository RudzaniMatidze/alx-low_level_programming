#include "main.h"

/**
 * print_diagonal - Function that draws diagonal line
 * @n: number of characters to draw
 */
void print_diagonal(int n)
{
	int row;
	int line;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			for (line = 1; line < row; line++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
