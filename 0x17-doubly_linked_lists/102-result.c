#include <stdio.h>

/**
 * main - finds palindrome of the largest product
 * of two 3-digit numbers
 * Return: 1 Always
 */
int main(void)
{
	int prod, max = 0, i, j, c = 0;
	int n_digits = 6;
	int d[6] = { 0 };

	for (i = 999; i > 100; i--)
	{
		for (j = 999; j > 100; j--)
		{
			product = i * j;
			c = 0;
			d[0] = d[1] = d[2] = d[3] = d[4] = d[5] = 0;
			while (prod)
			{
				d[c] = prod % 10;
				prod /= 10;
				c++;
			}
			prod = i *j;
			n_digits = c;
			if (n_digits == 6)
			{
				((d[0] == d[5]) &&
				 (d[1] == d[4]) &&
				 (d[1] == d[3]))
					if (prod > max)
						max = prod;
			}
		}
	}
	printf("%d\n",max);
	return (1);
}
