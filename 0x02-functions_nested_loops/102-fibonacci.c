#include <stdio.h>
/**
 *main - prints out first 50
 *fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{
	int inc;
	unsigned long a1 = 0, a2 = 1, a3;

	for (inc = 0; inc < 50; inc++)
	{
		a3 = a1 + a2;
		printf("%lu", a3);
		a1 = a2;
		a2 = a3;

		if (inc == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
