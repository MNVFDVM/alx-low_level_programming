#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
