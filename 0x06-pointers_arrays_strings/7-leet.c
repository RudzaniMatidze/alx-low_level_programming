#include "main.h"
/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @n: pointer to string.
 *
 * Return: pointer to n.
 */
char *leet(char *n)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	/*  scan through string */
	stringCount = 0;
	while (n[stringCount] != '\0')
		/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == n[stringCount])
			{
				n[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (n);
}
