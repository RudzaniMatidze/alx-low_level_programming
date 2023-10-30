#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int s1_len = 0, s2_len = 0;
	int c, d, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	size = s1_len + s2_len;
	concat = malloc(sizeof(char) * (size + 1));
	if (concat == NULL)
		return (NULL);
	for (c = 0; c < s1_len; c++)
		concat[c] = s1[c];
	for (d = 0; c < size && d < s2_len; c++, d++)
		concat[c] = s2[d];
	concat[c] = '\0';

	return (concat);
}
