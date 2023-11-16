#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked
 * @h: linked list.
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t lmnts = 0;

	while (h)
	{
		lmnts++;
		h = h->next;
	}
	return (lmnts);
}
