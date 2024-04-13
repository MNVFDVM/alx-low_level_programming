#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *v, *k;
	hash_node_t  *b, *n;

	if (!ht || !key || !*key || !value)
		return (0);

	v = strdup(value);
	if (!v)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	b = ht->array[i];

	while (b)
	{
		if (!strcmp(key, b->key))
		{
			free(b->value);
			b->value = v;
			return (1);
		}
		b = b->next;
	}
	n = calloc(1, sizeof(hash_node_t));
	if (n == NULL)
	{
		free(v);
		return (0);
	}
	k = strdup(key);
	if (!k)
		return (0);
	n->key = k;
	n->value = v;
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}
