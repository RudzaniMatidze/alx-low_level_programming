#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit number
 * @index: bit index
 * Return: value of bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);
	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1);
		}
	}
	return (-1);
}
