#include "main.h"
/**
 * reverse_array - reverses an array.
 * @a: pointer to array.
 * @n: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		i = a[counter];
		a[counter++] = a[n];
		a[n--] = i;
	}
}
