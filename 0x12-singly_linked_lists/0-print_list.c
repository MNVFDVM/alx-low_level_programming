#include "lists.h"

/**
 * _strlen - return the lenth of the string
 * @s: the string
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int j = 0;

	if (!s)
		return (0);
	while (*s++)
		j++;
	return (j);
}

/**
 * print_list - print a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		j++;
	}
	return (j);
}
