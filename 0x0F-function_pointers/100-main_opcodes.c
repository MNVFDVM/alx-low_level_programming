#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - chek the code for school students
 *
 * @argc: the nunmber of args
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *m = (char *)main;
	int n;

	if (argc != 2)
		printf("Error\n"), exit(1);
	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);
	while (n--)
		printf("%02hhx%s, *m++, n ? " " : "\n");
	return (0);
}
