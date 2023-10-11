#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
