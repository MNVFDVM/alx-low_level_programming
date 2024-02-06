#include "lists.h"
/**
 * add_nodeint - add node to the top
 * @head: pointer to the first node
 * @n: value for new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
