#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		count++;
	}
	return (count);
}
