#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int km;
	char *b;

	km = 1;
	b = (char *) &km;

	return ((int)*b);
}
