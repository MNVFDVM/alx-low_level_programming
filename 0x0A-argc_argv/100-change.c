#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coin to make change
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, rest = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	rest = atoi(argv[1]);
	if (rest < 0)
		printf("0\n");
	else
	{
		sum += rest / 25;
		rest %= 25;

		sum += rest / 10;
		rest %= 10;

		sum += rest / 5;
		rest %= 5;

		sum += rest / 2;
		rest %= 2;

		sum += rest;

		printf("%d\n", sum);
	}
	return (0);
}


