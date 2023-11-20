#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;

	if (h == NULL)
		return (0);
	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
