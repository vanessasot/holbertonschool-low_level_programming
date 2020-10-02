#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_t;
	unsigned long int index;

	hash_t = hash_djb2(key);
	index = hash_t % size;

	return (index);
}
