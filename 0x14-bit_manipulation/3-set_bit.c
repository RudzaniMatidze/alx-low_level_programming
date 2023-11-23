#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number of set bit
 * @index: bit index
 * Return: 1 if success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maximum = 0x01;

	maximum <<= index;
	if (maximum == 0)
		return (-1);
	*n |= maximum;
	return (1);
}
