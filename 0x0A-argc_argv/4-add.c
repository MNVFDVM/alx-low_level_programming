#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - it all starts here
 *
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
