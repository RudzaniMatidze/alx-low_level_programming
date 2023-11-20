#include "lists.h"
/**
 * listint_len - returns num of elements in linked listint_t
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->nxt;
	}
	return (cnt);
}
