#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string, followed by a new line,
 * @str: string to print
 * Return: void
*/


void _puts(char *str)
{
int x = 0;
while (str[x])
{
	_putchar(str[x]);
	x++;
}

}

/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, num1, x;

	for (num1 = 0; !(s[num1] >= 48 && s[num1] <= 57); num1++)
	{
		if (s[num1] == '-')
		{
			sign *= -1;
		}
	}

	for (x = num1; s[x] >= 48 && s[x] <= 57; x++)
	{
		resp *= 10;
		resp += (s[x] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: integer
 * Return: always 0
 */

void print_int(unsigned long int n)
{

unsigned  long int div = 1, x, resp;

for (x = 0; n / div > 9; x++, div *= 10)
;

for (; div >= 1; n %= div, div /= 10)
{
	resp = n / div;
	_putchar('0' + resp);
}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
	_puts("Error ");
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
