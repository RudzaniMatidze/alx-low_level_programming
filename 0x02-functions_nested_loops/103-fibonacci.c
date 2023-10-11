#include <stdio.h>
/**
 *main - prints sum of even fibonacci
 *Return: return 0
 */
int main(void)
{
	unsigned long m1 = 0, m2 = 1, m3 = 0, sum = 0;

	while (m3 <= 4000000)
	{
		m3 = m1 + m2;
		m1 = m2;
		m2 = m3;

		if ((m1 % 2) == 0)
			sum += m1;

	}
	printf("%ld\n", sum);
	return (0);
}
