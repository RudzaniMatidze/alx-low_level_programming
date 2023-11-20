#include "lists.h"
/**
 * *add_nodeint_end - adds new node at the end of listint_t
 * @head: first node pointer
 * @n: new node data
 * Return: new node pointer, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	(void)tmp;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->nxt = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->nxt != NULL)
		{
			tmp = tmp->nxt;
		}
		tmp->nxt = nw;
	}

	return (*head);
}
