#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bit number
 * @index: bit index
 * Return: value of bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k = 0x01;

	k <<= index;
	if (k == 0)
		return (-1);
	if ((n & k))
		return (1);
	else
		return (0);
}
