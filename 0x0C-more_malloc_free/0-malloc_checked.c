#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory.
 * @b: size to allocate
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
