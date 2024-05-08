#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t minimum(size_t a, size_t b);

/**
 * minimum - Returns the minimum size_t of two values
 * @a: First value
 * @b: Second value
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t minimum(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - searches using Exponential search algorithm
 * @array: Array of integers
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 * Return: index with `value`, or -1 if not found
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: Array of integers
 * @size: Size of array
 * @value: value to search for
 * Return: index with `value`, or -1 if not found or
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = minimum(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
