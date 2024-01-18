#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings
 *
 * @s1: pointer to first string
 * @s2: pointr to second string
 * @n: number of bytes
 *
 * Return: pointer to space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	str = malloc(l1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
