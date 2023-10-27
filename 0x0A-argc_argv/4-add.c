#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers..
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int m, n, add = 0;

	for (m = 1; m < argc; m++)
	{
		for (m = 0; argv[m][n] != '\0'; n++)
		{
			if (isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[m]);
	}
	printf("%d\n", add);
	return (0);
}
