#include "search_algos.h"

/**
 * minimum - Minimum value of two integers
 * @a: first value
 * @b: second value
 * Return: a if lower or = b, otherwise b
 */
size_t minimum(size_t a, size_t b)
{
	return (a <= b ? a : b);
}


/**
 * jump_search - Searches using Jump search algorithm
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: index value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);
	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
			low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
				high, array[high]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= minimum(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
