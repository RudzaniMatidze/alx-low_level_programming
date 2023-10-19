#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (k = 0; k < n--; k++)
	{
		j = a[k];
		a[k] = a[n];
		a[n] = k;
	}
}
