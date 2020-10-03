#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long int in;

	for (in = 0; in < ht->size; in++)
	{
		while (ht->array[in] != NULL)
		{
			aux = ht->array[in]->next;
			free(ht->array[in]->key);
			free(ht->array[in]->value);
			free(ht->array[in]);
			ht->array[in] = aux;
		}
	}
	free(ht->array);
	free(ht);
}
