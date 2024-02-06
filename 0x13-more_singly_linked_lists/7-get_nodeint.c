#include "lists.h"
/**
 * get_nodeint_at_index - return node at index
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int h;

	for (node = head, h = 0; node && h < index; node = node->next, h++)
		return (node);
}
