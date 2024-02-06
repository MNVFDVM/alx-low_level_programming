#include "lists.h"
/**
 * free_listint2 - free list of int
 *
 * @head: address of pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *n, *tmp;

	if (!head)
		return;
	n = *head;
	while (n)
	{
		tmp = n;
		n = n->next;
		free(tmp);
	}
	*head = NULL;
}
