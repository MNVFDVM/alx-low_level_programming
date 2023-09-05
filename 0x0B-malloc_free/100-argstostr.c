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
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * argstoster - description
 *
 * @ac: int
 * @av: arguments
 *
 * Return: string
 */
char *argstoster(int ac, char **av)
{
	int i = 0, n = 0, j = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, n++)
		n += _strlen(av[i]);
	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			s[c] = av[i][j];
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
