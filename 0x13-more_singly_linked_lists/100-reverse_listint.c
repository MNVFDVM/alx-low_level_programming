#include "lists.h"
/**
 * reverse_listint - reverse int list
 *
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	n = *head;
	*head = NULL;
	while (n)
	{
		next = n->next;
		n->next = *head;
		*head = n;
		n = next;
	}
	return (*head);
}
