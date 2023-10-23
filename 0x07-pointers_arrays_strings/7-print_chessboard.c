#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that the chessboard.
 * @a: array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int k, n;

	for (k = 0; k < 8; k++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[k][n]);
		_putchar('\n');
	}
}
