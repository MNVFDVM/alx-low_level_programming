#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t  *b;

	if (!ht || !ht->array || !key || !*key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	b = ht->array[i];

	while (b)
	{
		if (!strcmp(key, b->key))
			return (b->value);
		b = b->next;
	}
	return (NULL);
}
