#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * is_digit - checks for non-digit char
 * @s: string
 * Return: Always 0
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns length of string.
 * @s: string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors in main.
 * Return: void
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, len, x, carry, digit1, digit2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		result[x] = 0;
	for (len1 = len1 - len1 - 1; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - '0';
		carry = 0;
		for (len2 = strlen(str2) - 1; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
