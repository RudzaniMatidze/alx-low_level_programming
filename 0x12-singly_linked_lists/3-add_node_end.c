#include "lists.h"
/**
 * *add_node_end -  adds a new node at the end of a list_t
 * @head: list_t pointer
 * @str: list_t string
 * Return: NULL, otherwise new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	old = *head;
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
