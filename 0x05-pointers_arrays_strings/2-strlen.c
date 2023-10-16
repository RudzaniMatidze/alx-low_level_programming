#include "main.h"
/**
 * _strlen - writes a function that returns the lenght of a string.
 * @s: string to evaluate.
 * Return: the length of string.
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);
}
