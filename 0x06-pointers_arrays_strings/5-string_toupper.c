#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercases to uppercases
 * @n: analized srin.
 * Return: string with uppercase.
 */
char *string_toupper(char *n)
{
	int i;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= '0' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}
