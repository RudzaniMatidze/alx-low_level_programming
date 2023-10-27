#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - Searches a string for any set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int k, n;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[k] == accept[n])
				return (s + k);
		}
	}
	return (NULL);
}
