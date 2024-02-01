#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table array
 * Return: NULL or hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tble;
	unsigned long int indx;

	new_tble = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_tble == NULL)
		return (NULL);
	new_tble->size = size;
	new_tble->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_tble->array == NULL)
	{
		free(new_tble);
		return (NULL);
	}
	for (indx = 0; indx < size; indx++)
		(new_tble->array)[indx] = NULL;
	return (new_tble);
}
