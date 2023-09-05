#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to integer
 *
 * @s: string
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	j = 0;
	b = 0;
	n = 0;
	len = 0;
	f = 0;
	g = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++b;
		if (s[j] >= '0' && s[j] <= '9')
		{
			g = s[j] - '0';
			if (b % 2)
				g = -g;
			n = n * 10 + g;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multipliies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
