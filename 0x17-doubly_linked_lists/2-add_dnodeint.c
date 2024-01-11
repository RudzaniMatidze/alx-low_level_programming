#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list.
 * @head: pointer to the pointer of the head of the list
 * @n: value to be assigned to the new node
 * Return: the address of the new element, oe NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_node = malloc(sizeof(dlistint_t));

	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->prev = NULL;
	nw_node->next = *head;

	if (*head != NULL)
		(*head)->prev = nw_node;

	*head = nw_node;

	return (nw_node);
}
