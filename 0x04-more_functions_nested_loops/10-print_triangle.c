#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size:size of a triangle
 */
void print_triangle(int size)
{
	int m1, m2;

	if (size > 0)
	{
		for (m1 = 1; m1 <= size; m1++)
		{
			for ((m2 = size - m1); m2 > 0; m2--)
				_putchar(' ');

			for (m2 = 0; m2 < m1; m2++)
				_putchar('#');

			if (m1 == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
