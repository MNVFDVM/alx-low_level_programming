#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _r - reallocate memory for array of pointers
 *
 * @list: old list to append
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];
	newlist[j] = new;
	free(list);
	return (newlist);
}
/**
 * print_listint_safe - print listint_t linked list
 *
 * @head: pointer to start of the list
 *
 * Return: number of nodes to list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, num = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (head == l[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				return (num);
			}
		}
		num++;
		l = _r(l, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	return (num);
}
