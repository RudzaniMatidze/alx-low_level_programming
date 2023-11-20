#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: freed pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->nxt != NULL)
	{
		tmp = (*head)->nxt;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;
}
