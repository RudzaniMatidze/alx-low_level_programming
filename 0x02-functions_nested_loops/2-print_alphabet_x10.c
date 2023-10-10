#include "main.h"
/**
 * print _alphabet_x10.c - make aplhabet x10 times
 * Description: This function prints the alphabet in lowercase 10 times,
 * with each setof letters separated by a newline character.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
