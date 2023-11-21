#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempo = head;
	const listint_t *arr[1024];
	size_t lng = 0, a;

	if (!head)
	{
		printf("0\n");
		exit(98);
	}
	while (tempo)
	{
		for (a = 0; a < lng; a++)
			if (arr[a] == tempo)
			{
				printf("-> [%p] %d\n", (void *)tempo, tempo->n);
				return (lng);
			}
		arr[lng] = tempo;
		lng++;

		printf("[%p] %d\n", (void *)tempo, tempo->n);
		tempo = tempo->next;
	}
	return (lng);
}
