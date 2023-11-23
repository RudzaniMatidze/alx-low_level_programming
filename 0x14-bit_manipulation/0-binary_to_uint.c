#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char pointer to string with binary
 * Return: converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, ans = 0, lng = 0;

	if (b == NULL)
		return (0);

	while (b[lng])
		lng++;
	while (lng)
	{
		if (b[lng - 1] != '0' && b[lng - 1] != '1')
			return (0);
		if (b[lng - 1] == '1')
			ans += base;
		base *= 2;
		lng--;
	}
	return (ans);
}
