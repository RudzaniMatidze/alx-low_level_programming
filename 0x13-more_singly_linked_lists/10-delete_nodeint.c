#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: first element pointer
 * @index: delete node index
 * Return: 1 (success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tempo;
	listint_t *nde;

	tempo = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && tempo != NULL && index != 0; a++)
		tempo = tempo->next;
	if (tempo == NULL)
		return (-1);
	if (index == 0)
	{
		nde = tempo->next;
		free(tempo);
		*head = nde;
	}
	else
	{
		if (tempo->next == NULL)
			nde = tempo->next;
		else
			nde = tempo->next->next;
		free(tempo->next);
		tempo->next = nde;
	}
	return (1);
}
