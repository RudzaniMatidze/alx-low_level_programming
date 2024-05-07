#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: Index of value or -1if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
