#include <stdio.h>
/**
 * main - A program that prints the alphabet except q & e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
