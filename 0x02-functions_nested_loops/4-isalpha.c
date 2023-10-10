#include "main.h"
#include <ctype.h>

/**
 * _is alpha - checks for alphabetic order
 *
 * @c: alphabet to check
 *
 * Return: 1 if c  is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
