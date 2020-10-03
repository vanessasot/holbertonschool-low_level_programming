#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned int i = 0;
	unsigned long int in;

	if (ht)
	{
		printf("{");
		for (in = 0; in < ht->size; in++)
		{
			aux = ht->array[in];
			while (aux != NULL)
			{
				if (i == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				i = 1;
				aux = aux->next;
			}
		}
		printf("}\n");
	}
}
