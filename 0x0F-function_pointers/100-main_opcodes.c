#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes -  program that prints the opcodes
 * @a: address of main function
 * @n: number of bytes
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%.2hhx", a[k]);
		if (k < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints opcodes of its own
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int d;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	d = atoi(argv[1]);
	if (d < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, d);
	return (0);
}
