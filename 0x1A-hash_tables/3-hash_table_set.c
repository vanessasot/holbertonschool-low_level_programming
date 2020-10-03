#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key of the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded or 0 if not.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *aux = NULL;
	unsigned long int i_k = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i_k = key_index((unsigned char *)key, ht->size);

	aux = ht->array[i_k];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i_k];
	ht->array[i_k] = new;

	return (1);
}
