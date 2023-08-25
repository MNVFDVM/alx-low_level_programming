#include "main.h"
/**
 * leet - incode string into 1337
 *
 * @s: string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *p = s;
	char key[] = {'A', 'E', 'o', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*s)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			if (*s == key[j] || *s == key[j] + 32)
			{
				*s = 48 + value[j];
			}
		}
		s++;
	}
	return (p);
}
