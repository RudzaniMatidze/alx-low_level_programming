#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, k;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < len; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
