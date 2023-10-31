#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program
*@ac: argument count
*@av: argument vector
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;
		int d = 0, f = ac, g, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		new_string = (char *) malloc(sum + 1);

		if (new_string != NULL)
		{
			while (d < f)
			{
				for (g = 0; av[d][g] != '\0'; g++)
					new_string[g + temp] = av[d][g];
				new_string[temp + g] = '\n';
				temp += (g + 1);
				d++;
			}
			new_string[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
