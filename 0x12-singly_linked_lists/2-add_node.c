#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t
 * @head: list_t pointer
 * @str: list_t string
 * Return: list_t string
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *nm;
	int len;

	nm = malloc(sizeof(list_t));
	if (nm == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(nm);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	nm->str = new_str;
	nm->len = len;
	nm->next = *head;

	*head = nm;

	return (nm);
}
