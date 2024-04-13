#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *b, *a;
	unsigned long int j = 0;

	if (!ht)
		return;

	for (j = 0; j < ht->size; j++)
	{
		b = ht->array[j];
		while (b)
		{
			a = b;
			b = b->next;
			if (a->key)
				free(a->key);
			if (a->value)
				free(a->value);
			free(a);
		}
	}
	free(ht->array);
	free(ht);
}
