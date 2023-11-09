#include "variadic_functions.h"
/**
 * print_numbers - prints integers
 * @separator: printed between numbers
 * @n: number if integer
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d, ar;

	va_list ptr;

	va_start(ptr, n);

	for (d = 0; d < n; d++)
	{
		ar = va_arg(ptr, const unsigned int);
		printf("%d", ar);

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
