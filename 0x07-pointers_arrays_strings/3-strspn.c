#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, n, value, ckeck;

	value = 0;
	for (k = 0; s[k] != '\0'; k++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[k])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (NULL);
	}
}
