#include "main.h"

/**
 * *_memset - function that fills memory with  constant byte.
 * @s: pointed destination
 * @b: constrant byte
 * @n: bytes
 * Return:Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
