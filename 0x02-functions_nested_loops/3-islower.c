#include "main.h"

/**
 * _islower - checks for lowercase character
 * Description: This function takes a character as input and checks if it is a
 * lowercase letter. If the character is lowercase, it returns 1; otherwise, it
 * returns 0.
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
