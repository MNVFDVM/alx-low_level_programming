#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
		putchar(c);
	c = 'a';
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
