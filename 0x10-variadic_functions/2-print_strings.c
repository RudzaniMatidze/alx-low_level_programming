#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between two strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (d = 0; d < n; d++)
	{
		str = va_arg(ptr_str, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}

