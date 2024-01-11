#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * Return: the sum of all the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int ans = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		ans += curr->n;
		curr = curr->next;
	}
	return (ans);
}
