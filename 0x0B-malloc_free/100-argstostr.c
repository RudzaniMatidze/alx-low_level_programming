#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: argument vector
 * Return: string containing all arguments.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int c, d, e, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
			len++;
	}
	len += ac;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
		{
			s[e] = av[c][d];
			e++;
		}
		if (s[e] == '\0')
		{
			s[e++] = '\n';
		}
	}
	return (s);
}
