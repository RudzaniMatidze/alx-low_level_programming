#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: listint_t to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
