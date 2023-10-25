#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: A string
 * Return: interger value
 */
int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
