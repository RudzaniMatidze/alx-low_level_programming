#include "lists.h"
/**
 * *find_listint_loop -  finds the loop in a linked list.
 * @head: head pointer
 * Return: address of node, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pr;
	listint_t *back;

	pr = head;
	back = head;
	while (head && pr && pr->next)
	{
		head = head->next;
		pr = pr->next->next;
		if (head == pr)
		{
			head = back;
			back = pr;
			while (1)
			{
				pr = back;
				while (pr->next != head && pr->next != back)
				{
					pr = pr->next;
				}
				if (pr->next == head)
					break;

				head = head->next;
			}
			return (pr->next);
		}
	}
	return (NULL);
}
