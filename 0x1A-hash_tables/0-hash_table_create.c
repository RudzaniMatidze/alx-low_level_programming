#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of an array.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int indx;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (indx = 0; indx < size; indx++)
		new_ht->array[indx] = NULL;

	return (new_ht);
}
