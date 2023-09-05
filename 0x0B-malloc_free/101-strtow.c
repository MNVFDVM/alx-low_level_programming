#include "main.h"
/**
 * wrdcnt - count the number of words in string
 *
 * @s: string to count
 *
 * Return: the number of words
 */
int wrdcnt(char *s)
{
	int j, m = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == ' ')
		{
			if (s[j + 1] != ' ' && s[j + 1] != '\0')
				m++;
		}
		else if (j == 0)
				m++;
	}
	m++;
	return (m);
}
/**
 * strtow - split a string into words
 *
 * @str: string to split
 *
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	int x, y, k, l, n = 0, c = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' * (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			w[c] = (char *)malloc(y * sizeof(char));
			y--;
			if (w[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < y; l++)
				w[c][l] = str[x + l];
			w[c][l] = '\0';
			c++;
			x += y;
		}
		else
			x++;
	}
	return (w);
}
