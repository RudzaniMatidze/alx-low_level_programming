#include "main.h"
/**
 * cap_string - capitalizes the first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @n: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *n)
{
	int count;

	/*  scan through string */
	count = 0;
	while (n[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (n[0] >= 97 && n[0] <= 122)
		{
			n[0] = n[0] - 32;
		}
		if (n[count] == ' ' || n[count] == '\t' || s[count] == '\n'
				|| n[count] == ',' || n[count] == ';' || n[count] == '.'
				|| n[count] == '.' || n[count] == '!' || n[count] == '?'
				|| n[count] == '"' || n[count] == '(' || n[count] == ')'
				|| n[count] == '{' || n[count] == '}')
		{
			if (n[count + 1] >= 97 && n[count + 1] <= 122)
			{
				n[count + 1] = n[count + 1] - 32;
			}
		}
		count++;
	}
	return (n);
}
