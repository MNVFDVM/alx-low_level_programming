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
	int f, c, w;


	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
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
