#include <stdio.h>
#include "main.h"
/**
 * main - print the program name
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
