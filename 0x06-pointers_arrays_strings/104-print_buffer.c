#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @n: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *n, int s, int l)
{
	int d, e;

	for (d = 0; d <= 9; d++)
	{
		if (d <= s)
			printf("%02x", n[l * 10 + d]);
		else
			printf("  ");
		if (d % 2)
			putchar(' ');
	}
	for (e = 0; e <= s; e++)
	{
		if (n[l * 10 + e] > 31 && n[l * 10 + e] < 127)
			putchar(n[l * 10 + e]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m;

	for (m = 0; m <= (size - 1) / 10 && size; m++)
	{
		printf("%08x: ", m * 10);
		if (m < size / 10)
		{
			print_line(b, 9, m);
		}
		else
		{
			print_line(b, size % 10 - 1, m);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
