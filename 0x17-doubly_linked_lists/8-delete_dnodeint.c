#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *f1;
	dlistint_t *f2;
	unsigned int j;

	f1 = *head;

	if (f1 != NULL)
		while (f1->prev != NULL)
			f1 = f1->prev;

	j = 0;

	while (f1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = f1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				f2->next = f1->next;

				if (f1->next != NULL)
					f1->next->prev = f2;
			}

			free(f1);
			return (1);
		}
		f2 = f1;
		f1 = f1->next;
		j++;
	}

	return (-1);
}
