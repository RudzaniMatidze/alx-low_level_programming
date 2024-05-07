#include "search_algos.h"

/**
 * interpolation_search - Searches using Interpolation search algorithm
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: Index value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low;
	size_t high = size - 1;

	if (!array)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
