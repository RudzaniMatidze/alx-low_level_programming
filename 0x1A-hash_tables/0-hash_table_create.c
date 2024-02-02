#include "hash_tables.h"
/**
* hash_table_create - creates a hash table.
* @size: size of the hash table array
* Description: Creates a hash table.
* Return: Ptr to new table, or NULL if fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int indx;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	new_table->size = size;
	for (indx = 0; indx < size; indx++)
		new_table->array[indx] = NULL;
	return (new_table);
}
