#include <stdio.h>
/**
 *main - prints out first 98
 *fibonacci suit numbers
 *Return: return 0
 */
int main(void)
{
	int inc;
	unsigned long k1 = 0, k2 = 1, k3;
	unsigned long k1_m1, k1_m2, k2_m1, k2_m2;
	unsigned long m1, m2;

	for (inc = 0; inc < 92; inc++)
	{
		k3 = k1 + k2;
		printf("%lu, ", k3);
		k1 = k2;
		k2 = k3;
	}
	k1_h1 = k1 / 10000000000;
	k2_h1 = k2 / 10000000000;
	k1_h2 = k1 % 10000000000;
	k2_h2 = k2 % 10000000000;
	for (inc = 93; inc < 99; inc++)
	{
		h1 = k1_m1 + k2_m1;
		h2 = k1_m2 + k2_m2;
		if ((k1_m2 + k2_m2) > 9999999999)
		{
			m1 += 1;
			m2 %= 10000000000;
		}
		printf("%lu%lu", m1, m2);
		if (inc != 98)
			printf(", ");

		k1_m1 = k2_m1;
		k1_m2 = k2_m2;
		k2_m1 = m1;
		k2_m2 = m2;
	}
	printf("\n");
	return (0);
}
