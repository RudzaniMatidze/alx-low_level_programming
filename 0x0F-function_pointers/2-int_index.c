#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: targeted array
 * @size: size of array
 * @cmp: function pointer
 * Return: returns -1 if no element match
 * or size is less than zero
 * return pointer the the first responding element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
