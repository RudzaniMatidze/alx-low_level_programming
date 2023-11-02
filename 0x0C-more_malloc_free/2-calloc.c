#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Allocates memory for an array.
 * @nmemb: number of elements.
 * @size: byte size.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	int x = 0, y = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	m = malloc(y);

	if (m == NULL)
		return (NULL);
	while (x < y)
	{
		m[x] = 0;
		x++;
	}
	return (m);
}
