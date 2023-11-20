#include "lists.h"
/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer to first node
 * @index: index node
 * Return: node pointer, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d = 0;
	listint_t *tmp = head;

	while (tmp && d < index)
	{
		tmp = tmp->next;
		d++;
	}

	return (tmp ? tmp : NULL);
}
