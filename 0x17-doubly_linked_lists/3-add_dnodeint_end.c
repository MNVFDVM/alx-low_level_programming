#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *w;

	w = malloc(sizeof(dlistint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;

	k = *head;

	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = w;
	}
	else
	{
		*head = w;
	}

	w->prev = k;

	return (w);
}
