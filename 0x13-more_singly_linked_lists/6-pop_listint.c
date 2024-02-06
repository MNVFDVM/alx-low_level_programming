#include "lists.h"
/**
 * pop_listint - pop head node of list
 * @head: address to pointer to first node
 *
 * Return: value of poped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int m;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	m = (*head)->m;
	free(*head);
	*head = node;
	return (m);
}
