#include "main.h"
#include <string.h>
/**
 * *_strdup - return pointer to newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	char *str1;

	str1 = malloc(strlen(str) + 1);
	if (str == NULL || str1 == NULL)
		return (NULL);
	while (str[i])
	{
		str1[i] = str[i];
		i++;
	}
	return (str1);
}
