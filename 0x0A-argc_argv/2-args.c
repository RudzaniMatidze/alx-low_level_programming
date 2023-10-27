#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all args it receives.
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}
	return (0);
}
