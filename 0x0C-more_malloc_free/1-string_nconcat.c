#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatnate two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to  string 2
 * @n: number of bytes
 *
 * Return: ponter to space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, k1, k2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k1 = 0; s1[k1] != '\0'; k1++)
		;
	for (k2 = 0; s2[k2] != '\0'; k2++)
		;
	str = malloc(k1 + n + 1);
	if (str == NULL)
		return (NULL);
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
