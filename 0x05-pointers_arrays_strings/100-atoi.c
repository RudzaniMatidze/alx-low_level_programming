#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for 101-crackme
 * Return: 0 (success)
 */
int main(void)
{
	int sum;
	char m;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		m = rand() % 128;
		sum += m;
		putchar(m);
	}
	putchar(2772 - sum);
	return (0);
}
