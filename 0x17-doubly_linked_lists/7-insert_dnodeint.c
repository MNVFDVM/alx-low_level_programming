#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *w;
	dlistint_t *d;
	unsigned int j;

	w = NULL;
	if (idx == 0)
		w = add_dnodeint(h, n);
	else
	{
		d = *h;
		j = 1;
		if (d != NULL)
			while (d->prev != NULL)
				d = d->prev;
		while (d != NULL)
		{
			if (j == idx)
			{
				if (d->next == NULL)
					w = add_dnodeint_end(h, n);
				else
				{
					w = malloc(sizeof(dlistint_t));
					if (w != NULL)
					{
						w->n = n;
						w->next = d->next;
						w->prev = d;
						d->next->prev = w;
						d->next = w;
					}
				}
				break;
			}
			d = d->next;
			j++;
		}
	}

	return (w);
}
