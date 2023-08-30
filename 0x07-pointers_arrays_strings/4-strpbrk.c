#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 *
 * @s: string
 * @accept: string to match
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *b;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				b = &s[i];
				return (b);
			}
			j++;
		}
		i++;
	}
	return (0);
}
