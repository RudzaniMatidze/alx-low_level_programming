#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer to memory
 * @old_size: old size of byte
 * @new_size: new size of byte
 * @min: minimum value
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x, max = new_size;
	char *old_p = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		p[x] = old_p[x];
	free(ptr);
	return (p);
}
