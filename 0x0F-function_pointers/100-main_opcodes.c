#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, j;
	char *arr;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	b = atoi(argv[1]);


	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}


	arr = (char *)main;

	for (j = 0; j < b; j++)
	{
		if (j == b - 1)
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
	return (0);
}
