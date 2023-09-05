#include "main.h"
/**
 * _atrlen - find length of string
 *
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * *str_concat - concatinate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, j;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	n = malloc((size1 + size2) *sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (j = 0; j <= (size1 + size2); j++)
	{
		if (j < size1)
			n[j] = s1[j];
		else
			n[j] = s2[j - size1];
	}
	n[j] = '\0';
	return (n);
}
