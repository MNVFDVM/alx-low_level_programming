#include "hash_tables.h"

/**
 * sorted_list - function for insert new node in sorted
 * @ht: pointer to sorted hash table
 * @new_node: pew node to insert
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *s = ht->shead;

	if (s == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, s->key) < 0)
		{
			new_node->snext = s;
			new_node->sprev = s->sprev;

			if (!s->sprev)
				ht->shead = new_node;
			else
				s->sprev->snext = new_node;
			s->sprev = new_node;
			return;
		}
		s = s->snext;
	} while (s);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;

	if (size == 0)
		return (NULL);

	t = calloc(1, sizeof(shash_table_t));
	if (t == NULL)
		return (NULL);

	t->size = size;
	t->array = calloc(size, sizeof(shash_node_t *));
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}
	return (t);
}

/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *v, *k;
	shash_node_t  *b, *n;

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
	n = calloc(1, sizeof(shash_node_t));
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
	sorted_list(ht, n);
	return (1);
}
/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	shash_node_t  *b;

	if (!ht || !key || !*key)
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

/**
 * shash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *b;
	int n = 0;

	if (!ht)
		return;
	b = ht->shead;
	printf("{");
	while (b)
	{
		if (n)
			printf(", ");
		printf("'%s': '%s'", b->key, b->value);
		n = 1;
		b = b->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key:value from ht in reverse
 * @ht: pointer to hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *b;
	int n = 0;

	if (!ht)
		return;
	b = ht->stail;
	printf("{");
	while (b)
	{
		if (n)
			printf(", ");
		printf("'%s': '%s'", b->key, b->value);
		n = 1;
		b = b->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *b, *a;
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
