#include "main.h"
/**
 * _strlen - find length of string
 *
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int z = 0;

	for (; s[z] != '\0'; z++)
		;
	return (z);
}
/**
 * *str_concat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int z1, z2, i;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	Z1 = _strlen(s1);
	z2 = _strlen(s2);
	n = malloc((z1 + z2) * sizeof(char) + 1);
	if (n == 0)
		return (0);
	for (i = 0; i <= z1 + z2; i++)
	{
		if (i < z1)
			n[i] = s1[i];
		else
			n[i] = s2[i - z1];
	}
	n[i] = '\0';
	return (n);
}
