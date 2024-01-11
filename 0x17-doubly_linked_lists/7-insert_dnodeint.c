#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: Pointer to the pointer of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be assigned to the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;
	unsigned int i;

	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->prev = NULL;
	nw_node->next = NULL;

	if (idx == 0)
	{
		nw_node->next = *h;
		if (*h != NULL)
			(*h)->prev = nw_node;
		*h = nw_node;
		return (nw_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
		{
			free(nw_node);
			return (NULL);
		}
		curr = curr->next;
	}
	if (curr == NULL)
	{
		free(nw_node);
		return (NULL);
	}
	nw_node->next = curr->next;
	nw_node->prev = curr;
	if (curr->next != NULL)
		curr->next->prev = nw_node;
	curr->next = nw_node;

	return (nw_node);
}
