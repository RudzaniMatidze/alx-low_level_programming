#include "main.h"

/**
 * print_line - A function that draws a straight line.
 * @n: the number of underscores to print
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
		_putchar('_');
	_putchar('\n');
}
