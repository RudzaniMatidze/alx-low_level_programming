#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
