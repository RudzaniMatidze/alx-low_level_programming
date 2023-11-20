#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * @head: pointer of first node
 * Return: sum result, otherwise 0 if empty
 */
int sum_listint(listint_t *head)
{
	int val = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		val += tmp->n;
		tmp = tmp->next;
	}

	return (val);
}
