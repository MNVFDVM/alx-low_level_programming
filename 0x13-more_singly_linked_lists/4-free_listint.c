#include "lists.h"
/**
 * free_listint - free list of int
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
