#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	int i, j;

	x = malloc(strlen(s1) + strlen(s2) + 1);
	if (x == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		x[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		x[i] = s2[j];
	x[i] = '\0';
	return (x);
}
