#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
