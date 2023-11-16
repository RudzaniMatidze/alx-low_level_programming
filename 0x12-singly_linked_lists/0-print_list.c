#include "lists.h"

/**
 * print_list - Prints all the elements of a list.
 * @h: The string
 * Return: The number of nodes .
 */

size_t print_list(const list_t *h)
{
	size_t nds = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		nds++;
	}
	return (nds);
}
