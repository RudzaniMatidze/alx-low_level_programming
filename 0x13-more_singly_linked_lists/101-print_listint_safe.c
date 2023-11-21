#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	long int tempo;

	while (head)
	{
		tempo = head - head->next;
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (tempo > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node);
}
