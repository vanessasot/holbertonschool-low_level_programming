#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: Pointer to the value or NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;
	unsigned long int i_k = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	i_k = key_index((unsigned char *)key, ht->size);
	aux = ht->array[i_k];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}
