#include "main.h"
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int j = 0, size = 0;
	char *n;

	if (str == null)
		return (null);
	for (; str[size] != '\0'; size++)
		;
	n = malloc(size * sizeof(*str) + 1);
	if (n == 0)
		return (null);
	else
	{
		for (; j < size; j++)
			n[j] = str[j];
	}
	return (n);
}
