#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an arrayof chars,
 * and initializes it with a special char.
 * @size: Array size
 * @c: char to fill the array.
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		s[n] = c;
	return (s);
}
