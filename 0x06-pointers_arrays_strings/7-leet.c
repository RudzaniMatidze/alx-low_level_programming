#include "main.h"
#include <stdio.h>
/**
 * leet - Encode into 1337speak.
 * @n: analized string.
 * Return: string with changed vowels
 */
char *leet(char *n)
{
	int c, d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[1] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[1] == s1[d])
			{
				n[1] = s2[d];
			}
		}
	}
	return (n);
}
