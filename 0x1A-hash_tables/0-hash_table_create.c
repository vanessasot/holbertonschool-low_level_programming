#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: Size of the hash table.
 *
 * Return: Table created or NULL if fail.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t **));

	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
