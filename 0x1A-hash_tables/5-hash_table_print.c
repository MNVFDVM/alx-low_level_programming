#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t  *b;
	int n = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		b = ht->array[j];
		while (b)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", b->key, b->value);
			n = 1;
			b = b->next;
		}
	}
	printf("}\n");
}
