#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check string
 *
 * @str: array
 *
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - print the name of program
 *
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int v;
	int s;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			v = atoi(argv[i]);
			s += v;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", s);
	return (0);
}
