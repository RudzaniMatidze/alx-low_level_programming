#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to integer
 * @index: bit index
 * Return: 1 if success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int km;

	if (index > 63)
		return (-1);
	km = 1 << index;

	if (*n & km)
		*n ^= km;
	return (1);
}
