#include "main.h"

/**
 * _puts_recursion - A function that prints a string.
 * @s: A string
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
