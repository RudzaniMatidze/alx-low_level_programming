#include "lists.h"
/**
 * *add_nodeint - adds new node at beginning of a listint_t
 * @head: pointer to the first node
 * @n: data to insertnew node
 * Return: new node pointer, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
