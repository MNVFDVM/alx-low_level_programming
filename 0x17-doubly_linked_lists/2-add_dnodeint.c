#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *w;
	dlistint_t *k;

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->prev = NULL;
	k = *head;

	if (k != NULL)
	{
		while (k->prev != NULL)
			k = k->prev;
	}

	w->next = k;

	if (k != NULL)
		k->prev = w;

	*head = w;

	return (w);
}
