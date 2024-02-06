#include "lists.h"

/**
 * print_listint - print a linked list
 *
 * @h: pointer to the first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
