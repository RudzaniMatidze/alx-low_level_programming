#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h:first node pointer
 * Return: elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lng = 0;
	int dff;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dff = *h - (*h)->next;
		if (dff > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			lng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lng++;
			break;
		}
	}
	*h = NULL;

	return (lng);
}
