#include "search_algos.h"

/**
 * binary_search -  Binary search algorithm
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: Index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int low, mid, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

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
			return (mid);
	}
	return (-1);
}
