#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that conccatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: amount of byte
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int f = 0, g = 0, h = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[f])
		f++;

	while (s2[h])
		h++;

	if (n >= h)
		i = f + h;
	else
		i = f + n;

	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);

	h = 0;
	while (g < i)
	{
		if (g <= f)
			str[g] = s1[g];

		if (g >= f)
		{
			str[g] = s2[h];
			h++;
		}
		g++;
	}
	str[g] = '\0';
	return (str);
}
