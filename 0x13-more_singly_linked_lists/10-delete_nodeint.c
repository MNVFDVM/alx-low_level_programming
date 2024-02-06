#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given index
 * @head: address to pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev;
	unsigned int j = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (j == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		j++;
		prev = node;
		node = node->next;
	}
	return (-1);
}
