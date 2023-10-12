#include "main.h"
/** 
 * main - Determine if a number is positive, negative or zero.
 * Return: 0 (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	printf("\n");
	return;
}
