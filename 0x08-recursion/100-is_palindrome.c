#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * palindrome_check - check if s is palindrome.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrome_check(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + palindrome_check(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome.
 * 0 if not
 * @s: string
 * Return: 1 if s is a prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindrome_check(s, 0, _strlen_recursion(s) - 1));
}
