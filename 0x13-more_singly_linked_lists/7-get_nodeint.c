#include "lists.h"
/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer to first node
 * @index: index node
 * Return: node pointer, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
