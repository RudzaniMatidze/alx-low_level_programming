#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: A string.
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
