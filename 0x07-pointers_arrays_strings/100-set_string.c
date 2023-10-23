#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: input
 * @to: input
 * Return: Always 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
