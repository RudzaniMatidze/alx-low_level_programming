#include "main.h"
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: string to print
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
