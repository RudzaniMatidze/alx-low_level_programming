#include "search_algos.h"


/**
 * linear_skip -  Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to traverse
 * @value: Value to search for
 * Return: Pointer to the first node where value is located, or NULL if list
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temps = NULL, *stops = NULL;

	if (!list)
		return (NULL);

	temps = list;
	while (temps && temps->express && temps->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temps->express->index, temps->express->n);
		temps = temps->express;
	}
	stops = temps;
	while (stops && stops->next != stops->express)
		stops = stops->next;
	/* value potentially lies between two express nodes */
	if (temps->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temps->express->index, temps->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temps->index, temps->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temps->index, stops->index);

	while (temps != stops && temps->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temps->index, temps->n);
		temps = temps->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       temps->index, temps->n);

	if (temps == stops)
		return (NULL);
	return (temps);
}
