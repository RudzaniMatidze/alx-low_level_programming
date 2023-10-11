#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, 
 * starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
	int inc;
	unsigned long k1 = 0, k2 = 1, k3;
	for (inc = 0; inc < 50; inc++)
	{
		k3 = k1 + k2;
		printf("%lu", k3);
		k1 = k2;
		k2 = k3;
		if (inc == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
