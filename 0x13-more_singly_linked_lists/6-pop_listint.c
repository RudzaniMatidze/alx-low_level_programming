#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: first element pointer
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (head == NULL || *head == NULL)
		return (0);
	val = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (val);
}
