#include <stdio.h>
#include <stdlib.h>
/**
 * main - print sum of two numbers
 *
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
