#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
			return (-1);
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;

	free(curr);
	return (1);
}
