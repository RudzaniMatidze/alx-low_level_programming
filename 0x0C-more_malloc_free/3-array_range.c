#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *ar;
	int x = 0;

	if (min > max)
		return (NULL);

	ar = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ar == NULL)
		return (NULL);

	while (min <= max)
	{
		ar[x] = min;
		x++;
		min++;
	}
	return (ar);
}
