#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter.
 * This function checks is the given character is a lowercase letter.
 * @c: The character to be checked
 * return: 1 for lowercase character or 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
