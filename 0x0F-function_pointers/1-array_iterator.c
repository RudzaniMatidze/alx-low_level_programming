#include "function_pointers.h"
/**
 * array_iterator - iterate through an array
 * @array: targeted array
 * @size: array size
 * @action: executed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(*array);
		array++;
	}
}
