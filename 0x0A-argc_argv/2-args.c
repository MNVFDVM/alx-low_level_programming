#include <stdio.h>
/**
 * main - print the number of arguments passed to a program
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
