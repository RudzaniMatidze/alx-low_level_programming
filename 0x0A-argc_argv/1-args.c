#include "main.h"
#include <stdio.h>

/**
 * main - A  program that prints the number of arg.
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
