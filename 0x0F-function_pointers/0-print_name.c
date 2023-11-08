#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: variable holding the string.
 * Return:Always 0
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
