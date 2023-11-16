#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: freed list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
