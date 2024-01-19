#include "main.h"
/**
 * *_strdup - return pointer to newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int j = 0, s = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[s] != '\0'; s++)
		;
	m = malloc(s * sizeof(*str) + 1);
	if (m == 0)
		return (NULL);
	else
	{
		for (; j < s; j++)
			m[j] = str[j];
	}
	return (m);
}
