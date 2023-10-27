#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - program that converts to coins
 * @w: Passed in variable from main for calculations
 * Return: Always 0
 */
int coinConverter(int w)
{
	int count = 0;

	while (w != 0)
	{
		if (w % 10 == 9 || w % 10 == 7)
			w -= 2;
		else if (w % 25 == 0)
			w -= 25;
		else if (w % 10 == 0)
			w -= 10;
		else if (w % 5 == 0)
			w -= 5;
		else if (w % 2 == 0)
		{
			if (w % 10 == 6)
				w -= 1;
			else
				w -= 2;
		}
		else
			w -= 1;
		count++;
	}

	return (count);
}

/**
 * main - program that prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int w, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	w = atoi(argv[1]);

	if (w < 0)
		printf("0\n");

	else
	{
		coin = coinConverter(w);

		printf("%d\n", coin);
	}

	return (0);
}
