#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: string to be printed
 * return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int m = 0;
	char *i = str;
	int n;

	while (*i != '\0')
	{
		i++;
		longi++;
	}
	m = longi - 1;
	for (n = 0; n <= m; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
