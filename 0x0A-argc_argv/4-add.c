#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main -  program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int p, q, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (p = 1; p < argc; p++)
		{
			ptr = argv[p];
			length = strlen(ptr);

			for (q = 0; q < length; q++)
			{
				if (isdigit(*(ptr + q)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[p]);
		}

		printf("%d\n", sum);
	}
	return (0);
}

