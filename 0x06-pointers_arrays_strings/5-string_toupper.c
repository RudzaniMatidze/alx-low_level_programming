#include "main.h"

/**
 * *string_toupper - Changes lowercases to uppercases
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int k;

	k = 0;
	while (n[k] != '\0')
	{
		if (n[k] >= '0' && n[k] <= 'z')
			n[k] = n[k] - 32;
		k++;
	}
	return (n);
}
