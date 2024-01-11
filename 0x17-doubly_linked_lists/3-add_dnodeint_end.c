#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the pointer of the head of the list
 * @n: value to be assigned to the new node
 * Return: hte address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw_node = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		nw_node->prev = NULL;
		*head = nw_node;
		return (nw_node);
	}
	while (end->next != NULL)
		end = end->next;

	end->next = nw_node;
	nw_node->prev = end;

	return (nw_node);
}
